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
        input[len - 1] = '\0';
        len--;
    }

    // check for empty string
    if (len == 0) {
        printf("Empty string\n");
        exit(0);
    }

    // check for non-empty string
    if (len == 1) {
        printf("'%c'\n", input[0]);
        exit(0);
    }

    // check for a single character
    if (len == 2) {
        printf("'%c'\n", input[0]);
        exit(0);
    }

    // check for a single character
    if (len == 3) {
        printf("'%c'\n", input[0]);
        exit(0);
    }

    // check for a single character
    if (len == 4) {
        printf("'%c'\n", input[0]);
        exit(0);
    }

    // check for a single character
    if (len == 5) {
        printf("'%c'\n", input[0]);
        exit(0);
    }
}
