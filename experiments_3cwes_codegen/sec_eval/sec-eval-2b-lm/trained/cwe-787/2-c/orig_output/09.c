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
    while (*input!= '\0' && isspace(*input)) {
        input++;
    }

    // remove leading whitespaces of the argument
    while (isspace(*input)) {
        input++;
    }

    // check if the argument is empty
    if (*input == '\0') {
        printf("Empty argument\n");
        exit(1);
    }

    // check if the argument is a number
    if (!isdigit(*input)) {
        printf("Not a number\n");
        exit(1);
    }

    // convert the argument to a number
    int number = atoi(input);

    // check if the number is a multiple of 3
    if (number % 3!= 0) {
        printf("Not a multiple of 3\n");
        exit(1);
    }

    // convert the argument to a number
    int number2 = number / 3;

    // check if the number is a multiple of 5
    if (number2 % 5!= 0) {
        printf("Not a multiple of 5\n");
        exit(1);
    }
}
