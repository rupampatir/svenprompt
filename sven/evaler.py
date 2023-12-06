import os
import re
import abc
import torch
import numpy as np

from sven.model import CodeGenPrefixCausalLM, load_model
from sven.constant import PROMPTS
from sven.utils import try_parse

class EvalerBase:
    def __init__(self, args):
        self.args = args
        self.load_model()

    @abc.abstractclassmethod
    def load_model(self):
        raise NotImplementedError()

    @abc.abstractclassmethod
    def sample(self, file_context, func_context, control, lang):
        raise NotImplementedError()

    def truncate(self, completion, lang):
        if lang == 'py':
            for match in re.finditer('\n', completion):
                cur_idx, next_idx = match.start(), match.end()
                if next_idx < len(completion) and not completion[next_idx].isspace():
                    completion = completion[:cur_idx]
                    break
            else:
                last_comment_str = '\n    #'
                if last_comment_str in completion:
                    completion = completion[:completion.rfind(last_comment_str)]
        elif lang == 'c':
            if '\n}' in completion:
                completion = completion[:completion.find('\n}')+2]
            else:
                last_comment_strs = ['\n    //', '\n    /*']
                for last_comment_str in last_comment_strs:
                    if last_comment_str in completion:
                        completion = completion[:completion.rfind(last_comment_str)]
                        completion = completion.rstrip() + '\n}'

            lines = completion.split('\n')
            final_lines = []
            for line in lines:
                if '->name = "' in line: continue
                final_lines.append(line)
            completion = '\n'.join(final_lines)
        else:
            raise NotImplementedError()

        return completion

    def process_completions_gpt(self, completions, lang):
        output_srcs, output_ids = [], []
        dup_srcs, non_parsed_srcs = [], []
        for completion in completions:
            """ Extract code blocks enclosed in triple backticks. """
            code_blocks = []
            lines = completion.split('\n')
            inside_code_block = False
            current_block = []

            for line in lines:
                if line.startswith('```'):
                    if inside_code_block:
                        code_blocks.append('\n'.join(current_block))
                        current_block = []
                    inside_code_block = not inside_code_block
                    continue
                if inside_code_block:
                    current_block.append(line)
            output_src = '\n'.join(code_blocks)
            if output_src in output_srcs:
                dup_srcs.append(output_src)
            elif try_parse(output_src, lang) != 0:
                non_parsed_srcs.append(output_src)
            else:
                output_srcs.append(output_src)
                output_ids.append(output_src)
                
        return output_srcs, output_ids, dup_srcs, non_parsed_srcs
    
    def process_completions(self, input_src, input_ids_len, gen_output, lang):
        tokens = gen_output[:, input_ids_len:, ...]
        completions = self.tokenizer.batch_decode(tokens)

        output_srcs, output_ids = [], []
        dup_srcs, non_parsed_srcs = [], []
        for i, completion in enumerate(completions):
            if self.tokenizer.eos_token in completion:
                completion = completion[:completion.find(self.tokenizer.eos_token)]
            completion = self.truncate(completion, lang)
            completion_len = len(self.tokenizer.encode(completion))
            output_src = completion # input_src + 
            output_src = output_src.rstrip() + '\n'
            if output_src in output_srcs:
                dup_srcs.append(output_src)
            elif try_parse(output_src, lang) != 0:
                print(output_src)
                non_parsed_srcs.append(output_src)
            else:
                output_srcs.append(output_src)
                output_ids.append((gen_output[i][:input_ids_len].tolist(), gen_output[i][input_ids_len:input_ids_len+completion_len].tolist()))

        return output_srcs, output_ids, dup_srcs, non_parsed_srcs

class LMEvaler(EvalerBase):
    def __init__(self, args):
        super().__init__(args)

    def load_model(self):
        self.tokenizer, self.model, self.input_device = load_model('lm', self.args.model_dir, False, self.args)
        try:
            self.model.eval()
        except:
            pass

    def commentify(self, input_string, lang):
        # Split the input string into lines
        commented_lines = input_string.split('\n')
        # Add a '#' or '//' at the beginning of each line
        if lang == 'py':
            commented_lines = ['# ' + line for line in commented_lines]
        elif lang == 'c':
            commented_lines = ['// ' + line for line in commented_lines]
        else:
            raise NotImplementedError()
        # Join the lines back into a single string
        output_string = '\n'.join(commented_lines)

        return output_string
    
    def generate_prompt(self, file_context, func_context, vul_type, lang, few_shot):

        # pretext = self.commentify("You are a software engineer who wants to write a program that is secure and does not have the {} vulnerability. Generate code for the following:".format(vul_type), lang)
        # pretext = self.commentify(few_shot, lang)
        
        prompt = few_shot + "\n" + file_context + func_context + "\nOUTPUT:"

        print (prompt)

        return prompt
    

    def sample(self, file_context, func_context, control, lang, vul_type, one_shot):
        input_src = self.generate_prompt(file_context, func_context, vul_type, lang, one_shot)
        completions = []
        if (self.args.model_dir == 'gpt'):
            gen_output = self.model.generate(
                input_src=input_src, 
                num_return_sequences=self.args.num_gen,
                temperature=self.args.temp,
                max_tokens=self.args.max_gen_len,
                top_p=self.args.top_p,
            )
            completions = self.process_completions_gpt(gen_output, lang)
        else:
            input_ids = self.tokenizer(input_src, return_tensors='pt').input_ids.to(self.input_device)
            input_ids_len = input_ids.shape[1]
            gen_output = self.model.generate(
                input_ids,
                do_sample=True,
                num_return_sequences=self.args.num_gen,
                temperature=self.args.temp,
                max_new_tokens=self.args.max_gen_len,
                top_p=self.args.top_p,
                pad_token_id=self.tokenizer.pad_token_id,
                use_cache=True,
                # return_dict_in_generate=True,
                # output_scores=True,
            )
            completions = self.process_completions(input_src, input_ids_len, gen_output, lang)
        return completions

class PrefixEvaler(EvalerBase):
    def __init__(self, args):
        super().__init__(args)

    def load_model(self):
        self.tokenizer, self.model, self.input_device = load_model('prefix', self.args.model_dir, False, self.args)
        self.model.eval()

    def sample(self, file_context, func_context, control, lang, vul_type, one_shot):
        return self.sample_prefix(file_context, func_context, control, lang)

    def sample_prefix(self, file_context, func_context, control, lang):
        input_src = file_context + func_context
        input_ids = self.tokenizer(input_src, return_tensors='pt').input_ids.to(self.input_device)
        input_ids_len = input_ids.shape[1]
        gen_output = self.model.generate(
            input_ids,
            do_sample=True,
            num_return_sequences=self.args.num_gen,
            temperature=self.args.temp,
            max_new_tokens=self.args.max_gen_len,
            top_p=self.args.top_p,
            pad_token_id=self.tokenizer.pad_token_id,
            use_cache=True,
            control_id=control,
            # return_dict_in_generate=True,
            # output_scores=True,
        )
        return self.process_completions(input_src, input_ids_len, gen_output, lang)

class TextPromptEvaler(EvalerBase):
    def __init__(self, args):
        super().__init__(args)

    def load_model(self):
        self.tokenizer, self.model, self.input_device = load_model('lm', self.args.model_dir, False, self.args)
        self.model.eval()

    def sample(self, file_context, func_context, control, lang, vul_type, one_shot):
        if lang == 'py':
            input_src = file_context + '# ' + PROMPTS[control] + func_context
        elif lang == 'c':
            input_src = file_context + '// ' + PROMPTS[control] + func_context
        else:
            raise NotImplementedError()
        input_ids = self.tokenizer(input_src, return_tensors='pt').input_ids.to(self.input_device)
        input_ids_len = input_ids.shape[1]
        gen_output = self.model.generate(
            input_ids,
            do_sample=True,
            num_return_sequences=self.args.num_gen,
            temperature=self.args.temp,
            max_new_tokens=self.args.max_gen_len,
            top_p=self.args.top_p,
            pad_token_id=self.tokenizer.pad_token_id,
            use_cache=True,
        )
        return self.process_completions(input_src, input_ids_len, gen_output, lang)
