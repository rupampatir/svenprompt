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
    while (*input && (*input =='')) {
        input++;
    }

    // if the argument is empty, print the argument
    if (*input == '\0') {
        printf("'%s'\n", input);
    }

    // otherwise, print the first character
    else {
        printf("'%c'\n", *input);
    }

    return 0;
}
