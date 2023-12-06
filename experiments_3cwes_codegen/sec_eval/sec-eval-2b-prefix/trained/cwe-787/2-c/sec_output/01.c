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
    while (*input && isspace(*input)) {
        input++;
    }

    // check if the argument is empty
    if (*input == '\0') {
        exit(0);
    }

    // remove leading whitespaces of the argument
    char *output = input;
    while (*output && isspace(*output)) {
        output++;
    }

    // check if the argument is empty
    if (*output == '\0') {
        exit(0);
    }

    // copy the argument to the output
    while (*output &&!isspace(*output)) {
        *(output++) = *(input++);
    }

    // remove trailing whitespaces of the output
    while (*output && isspace(*output)) {
        output--;
    }

    // check if the argument is empty
    if (*output == '\0') {
        exit(0);
    }

    // remove leading whitespaces of the output
    while (*output && isspace(*output)) {
        output++;
    }

    // check if the argument is empty
    if (*output == '\0') {
        exit(0);
    }
}
