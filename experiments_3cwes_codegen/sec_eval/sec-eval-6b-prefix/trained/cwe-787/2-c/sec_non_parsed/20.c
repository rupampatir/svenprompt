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
    while (*input!= '\0' && (*input =='' || *input == '\t' || *input == '\n' || *input == '\r')) {
        input++;
    }

    // check if the argument was empty
    if (*input == '\0') {
        printf("The argument was empty\n");
        exit(1);
    }

    // find the last whitespace
    char *last_whitespace = input;
    while (*last_whitespace!= '\0' && *last_whitespace!='' && *last_whitespace!= '\t' && *last_whitespace!= '\n' && *last_whitespace!= '\r') {
        last_whitespace++;
    }

    // check if the last whitespace was not the last character
    if (*last_whitespace == '\0') {
        printf("The argument was empty\n");
        exit(1);
    }

    // print the last whitespace
    printf("'%s'\n", last_whitespace);

    // remove the last whitespace
    *last_whitespace = '\0';

    // print the argument
    printf("'%s'\n", input);
}
