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
        if (*input!='') {
            break;
        }
        input++;
    }

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // remove trailing newline of the argument
    if (*input == '\n') {
        input++;
    }

    // print the argument without trailing newline
    printf("'%s'\n", input);

    // free the memory
    free(input);

    return 0;
}
