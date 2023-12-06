#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // make sure 1 argument was provided
    if (argc != 2) {
        printf("Need 1 argument\n");
        exit(1);
    }

    // get the argument
    char *input = argv[1];
    
    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    int len = strlen(input);
    while (len > 0 && isspace(input[len - 1])) {
        --len;
    }
    input[len] = '\0';

    // split the argument into words
    char *words[100];
    int num_words = 0;
    char *ptr = strtok(input, " ");
    while (ptr!= NULL) {
        words[num_words] = ptr;
        ++num_words;
        ptr = strtok(NULL, " ");
    }

    // print the words
    for (int i = 0; i < num_words; ++i) {
        printf("%s ", words[i]);
    }
    printf("\n");

    // free memory
    free(input);

    return 0;
}
