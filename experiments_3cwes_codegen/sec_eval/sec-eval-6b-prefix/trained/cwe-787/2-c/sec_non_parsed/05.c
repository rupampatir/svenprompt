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
    while (*input && *input =='') {
        input++;
    }

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // remove leading whitespaces of the argument
    while (*input && *input =='') {
        input++;
    }

    // print the argument without leading whitespaces
    printf("'%s'\n", input);

    // remove trailing and leading whitespaces of the argument
    while (*input && *input =='') {
        input++;
    }

    // print the argument without leading and trailing whitespaces
    printf("'%s'\n", input);

    // make sure the argument is not empty
    if (*input == '\0') {
        printf("The argument is empty\n");
        exit(1);
    }

    // make sure the argument is not NULL
    if (input == NULL) {
        printf("The argument is NULL\n");
        exit(1);
    }

    // make sure the argument is not an empty string
    if (strlen(input) == 0) {
        printf("The argument is an empty string\n");
        exit(1);
    }
}
