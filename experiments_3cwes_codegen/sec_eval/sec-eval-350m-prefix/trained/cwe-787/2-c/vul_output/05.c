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
    char *end = strchr(input, '\n');
    if (end) {
        *end = '\0';
    }

    // remove trailing newline
    input = strchr(input, '\r');
    if (input) {
        *input = '\0';
    }

    // remove trailing carriage return
    input = strchr(input, '\r');
    if (input) {
        *input = '\0';
    }

    // remove trailing backslash
    input = strchr(input, '\\');
    if (input) {
        *input = '\0';
    }

    // remove trailing backslash
    input = strchr(input, '\"');
    if (input) {
        *input = '\0';
    }

    // remove trailing backslash
    input = strchr(input, '\'');
    if (input) {
        *input = '\0';
    }

    // remove trailing quote
    input = strchr(input, '\"');
    if (input) {
        *input = '\0';
    }
}
