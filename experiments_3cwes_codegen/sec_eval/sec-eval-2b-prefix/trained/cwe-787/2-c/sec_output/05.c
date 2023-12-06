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
    size_t length = strlen(input);
    while (length > 0 && isspace(input[length-1])) {
        input[length-1] = '\0';
        length--;
    }

    // remove leading whitespaces of the argument
    length = strlen(input);
    while (length > 0 && isspace(input[0])) {
        input[0] = '\0';
        length--;
    }

    // check for empty string
    if (length == 0) {
        return 0;
    }

    // check for leading '-'
    if (input[0] == '-') {
        printf("Leading '-' is not allowed\n");
        exit(1);
    }

    // check for trailing '-'
    if (input[length-1] == '-') {
        printf("Trailing '-' is not allowed\n");
        exit(1);
    }

    // check for leading '+'
    if (input[0] == '+') {
        printf("Leading '+' is not allowed\n");
        exit(1);
    }
}
