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
    int length = strlen(input);
    while (length > 0 && isspace(input[length - 1])) {
        length--;
    }
    input[length] = '\0';

    // remove leading whitespaces of the argument
    length = strlen(input);
    while (length > 0 && isspace(input[0])) {
        input[length - 1] = '\0';
        length--;
    }

    // check if the argument is empty
    if (strlen(input) == 0) {
        printf("Empty string\n");
        exit(1);
    }

    // check if the argument is a number
    if (!isdigit(input[0])) {
        printf("Not a number\n");
        exit(1);
    }

    // convert the argument to a number
    long int number = strtol(input, NULL, 10);

    // check if the argument is a number
    if (number < 0) {
        printf("Not a number\n");
        exit(1);
    }

    // convert the argument to a number
    long int number2 = strtol(input, NULL, 10);
}
