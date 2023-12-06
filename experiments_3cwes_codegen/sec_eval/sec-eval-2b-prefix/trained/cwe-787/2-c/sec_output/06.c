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
    while (len > 0 && isspace(input[len-1])) {
        input[len-1] = '\0';
        len--;
    }

    // check if the argument is empty
    if (len == 0) {
        printf("Empty string\n");
        exit(1);
    }

    // check if the argument is a number
    char *endptr;
    double number = strtod(input, &endptr);
    if (endptr == input) {
        printf("Not a number\n");
        exit(1);
    }

    // check if the argument is a valid number
    if (number < 0 || number > 100) {
        printf("Not a valid number\n");
        exit(1);
    }

    // check if the argument is a valid number
    if (number < 0 || number > 100) {
        printf("Not a valid number\n");
        exit(1);
    }

    // check if the argument is a valid number
    if (number < 0 || number > 100) {
        printf("Not a valid number\n");
        exit(1);
    }
}
