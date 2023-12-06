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

    // print the argument again
    printf("'%s'\n", input);

    // remove leading whitespaces of the argument
    while (*input && isspace(*input)) {
        input++;
    }

    // print the argument again
    printf("'%s'\n", input);

    // remove all whitespaces of the argument
    while (*input) {
        if (isspace(*input)) {
            *input = '\0';
        }
        input++;
    }

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);
}
