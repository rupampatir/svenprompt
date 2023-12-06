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
    while (len && input[len-1] =='') {
        input[len-1] = 0;
        len--;
    }

    // check if the argument is empty
    if (len == 0) {
        printf("Argument is empty\n");
        exit(1);
    }

    // check if the argument is a number
    char *endptr;
    long int num = strtol(input, &endptr, 10);
    if (endptr == input) {
        printf("Argument is not a number\n");
        exit(1);
    }

    // check if the argument is a number
    if (num < 0) {
        printf("Argument is not a number\n");
        exit(1);
    }

    // check if the argument is a number
    if (num > INT_MAX) {
        printf("Argument is too big\n");
        exit(1);
    }

    // check if the argument is a number
    if (num < 0) {
        printf("Argument is too small\n");
        exit(1);
    }
}
