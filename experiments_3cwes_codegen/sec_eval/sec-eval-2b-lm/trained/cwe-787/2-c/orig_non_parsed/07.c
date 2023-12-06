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
    char *input_no_whitespaces = strchr(input,'');
    if (input_no_whitespaces == NULL) {
        input_no_whitespaces = input;
    } else {
        input_no_whitespaces++;
    }

    // remove leading whitespaces of the argument
    char *input_no_leading_whitespaces = strchr(input_no_whitespaces,'');
    if (input_no_leading_whitespaces == NULL) {
        input_no_leading_whitespaces = input_no_whitespaces;
    } else {
        input_no_leading_whitespaces++;
    }

    // remove trailing whitespaces of the argument
    char *input_no_trailing_whitespaces = strchr(input_no_leading_whitespaces,'');
    if (input_no_trailing_whitespaces == NULL) {
        input_no_trailing_whitespaces = input_no_leading_whitespaces;
    } else {
        input_no_trailing_whitespaces++;
    }
}
