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
    size_t len = strlen(input);
    for (size_t i = len - 1; i > 0; --i) {
        if (input[i]!='' && input[i]!= '\t') {
            break;
        }
        input[i] = '\0';
    }

    // get the length of the string
    len = strlen(input);

    // check for empty input
    if (len == 0) {
        printf("Empty input\n");
        exit(1);
    }

    // check for whitespaces
    if (len == 1 && input[0] =='') {
        printf("Whitespace only\n");
        exit(1);
    }

    // check for non-printable characters
    for (size_t i = 0; i < len; ++i) {
        if (!isprint(input[i])) {
            printf("Non-printable character '%c'\n", input[i]);
            exit(1);
        }
    }
}
