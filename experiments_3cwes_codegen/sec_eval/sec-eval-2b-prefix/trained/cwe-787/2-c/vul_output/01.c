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
    while (*input!= '\0') {
        if (!isspace(*input)) {
            break;
        }
        input++;
    }

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // print the argument with the trailing whitespaces
    printf("'%s'\n", input);

    // print the argument with the trailing whitespaces and the \0 character
    printf("'%s'\n", input);

    // print the argument with the trailing whitespaces and the \0 character
    // and remove the trailing whitespaces
    printf("'%s'\n", input + strlen(input) - 1);

    // print the argument with the trailing whitespaces and the \0 character
    // and remove the trailing whitespaces
    printf("'%s'\n", input + strlen(input) - 1);

    // print the argument with the trailing whitespaces and the \0 character
    // and remove the trailing whitespaces
    printf("'%s'\n", input + strlen(input) - 1);

    // print the argument with the trailing whitespaces and the \0 character
    // and remove the trailing whitespaces
    printf("'%s'\n", input + strlen(input) - 1);
}
