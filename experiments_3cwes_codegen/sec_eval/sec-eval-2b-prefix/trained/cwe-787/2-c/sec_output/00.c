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
        len--;
    }
    input[len] = '\0';

    // remove leading whitespaces of the argument
    len = strlen(input);
    while (len > 0 && isspace(input[0])) {
        input[0] = '\0';
        len--;
    }

    // check the argument
    if (strcmp(input, "") == 0) {
        printf("Empty string\n");
        exit(1);
    }

    // check the argument
    if (strcmp(input, " ") == 0) {
        printf("Space string\n");
        exit(1);
    }

    // check the argument
    if (strcmp(input, "Hello") == 0) {
        printf("Hello string\n");
        exit(1);
    }

    // check the argument
    if (strcmp(input, "Hello World") == 0) {
        printf("Hello World string\n");
        exit(1);
    }
}
