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
    char *input_without_trailing_whitespaces = strchr(input,'');
    if (input_without_trailing_whitespaces!= NULL) {
        *input_without_trailing_whitespaces = '\0';
    }

    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    char *input_without_trailing_whitespaces2 = strchr(input_without_trailing_whitespaces,'');
    if (input_without_trailing_whitespaces2!= NULL) {
        *input_without_trailing_whitespaces2 = '\0';
    }

    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    char *input_without_trailing_whitespaces3 = strchr(input_without_trailing_whitespaces2,'');
    if (input_without_trailing_whitespaces3!= NULL) {
        *input_without_trailing_whitespaces3 = '\0';
    }

    // print the argument
    printf("'%s'\n", input);
}
