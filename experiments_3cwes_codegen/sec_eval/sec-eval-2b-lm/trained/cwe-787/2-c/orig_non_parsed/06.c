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
    while (isspace(*input)) {
        input++;
    }

    // remove leading whitespaces of the argument
    while (*input =='') {
        input++;
    }

    // get the length of the argument
    int len = strlen(input);

    // get the number of digits in the argument
    int num_digits = 0;
    while (isdigit(*input)) {
        input++;
        num_digits++;
    }

    // get the number of characters in the argument
    int num_chars = len - num_digits;

    // check if the argument is too long
    if (num_chars > 15) {
        printf("Argument too long\n");
        exit(1);
    }

    // check if the argument is too short
    if (num_chars < 1) {
        printf("Argument too short\n");
        exit(1);
    }

    // check if the argument is a number
    if (!isdigit(*input)) {
        printf("Argument is not a number\n");
        exit(1);
    }
}
