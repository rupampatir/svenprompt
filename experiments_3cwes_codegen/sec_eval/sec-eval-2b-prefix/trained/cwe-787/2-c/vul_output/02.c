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
    while (strlen(input) > 0 && isspace(input[strlen(input) - 1])) {
        input[strlen(input) - 1] = '\0';
    }

    // remove leading whitespaces of the argument
    while (strlen(input) > 0 && isspace(*input)) {
        input++;
    }

    // check if the argument is a number
    if (isdigit(*input)) {
        // check if the argument is a number
        int number = atoi(input);

        // check if the argument is a number
        if (number < 0) {
            printf("Invalid argument\n");
            exit(1);
        }

        // print the number
        printf("%d\n", number);
    } else {
        // check if the argument is a number
        int number = atoi(input);

        // check if the argument is a number
        if (number < 0) {
            printf("Invalid argument\n");
            exit(1);
        }

        // print the number
        printf("%d\n", number);
    }

    // exit
    exit(0);
}
