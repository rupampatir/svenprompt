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
    while (isspace(input[strlen(input)-1])) {
        input[strlen(input)-1] = '\0';
    }

    // remove leading whitespaces of the argument
    while (isspace(input[0])) {
        input++;
    }

    // check if the argument is empty
    if (strlen(input) == 0) {
        printf("Empty argument\n");
        exit(1);
    }

    // check if the argument is a number
    if (!isdigit(input[0])) {
        printf("Not a number\n");
        exit(1);
    }

    // check if the argument is a number
    if (!isdigit(input[strlen(input)-1])) {
        printf("Not a number\n");
        exit(1);
    }

    // check if the argument is a number
    if (strlen(input) > 10) {
        printf("Too long\n");
        exit(1);
    }

    // check if the argument is a number
    if (strlen(input) < 10) {
        printf("Too short\n");
        exit(1);
    }
}
