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
    while (input[strlen(input) - 1] =='') {
        input[strlen(input) - 1] = 0;
    }

    // remove leading whitespaces of the argument
    while (*input =='') {
        input++;
    }

    // copy the argument to the output
    char *output = malloc(strlen(input) + 1);
    strcpy(output, input);

    // remove trailing whitespaces of the output
    while (output[strlen(output) - 1] =='') {
        output[strlen(output) - 1] = 0;
    }

    // remove leading whitespaces of the output
    while (*output =='') {
        output++;
    }

    // compare the two strings
    if (strcmp(output, input) == 0) {
        printf("They are the same\n");
    } else {
        printf("They are different\n");
    }

    // free the output
    free(output);

    return 0;
}
