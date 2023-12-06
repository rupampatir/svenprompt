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
    char *input_no_trailing_whitespace = strchr(input,'');
    if (input_no_trailing_whitespace!= NULL) {
        *input_no_trailing_whitespace = '\0';
    }

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // remove leading whitespaces of the argument
    char *input_no_leading_whitespace = strchr(input,'');
    if (input_no_leading_whitespace!= NULL) {
        *input_no_leading_whitespace = '\0';
    }

    // print the argument without leading whitespaces
    printf("'%s'\n", input);

    // print the argument without leading and trailing whitespaces
    printf("'%s'\n", input);

    return 0;
}
