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
    while (*input =='') {
        input++;
    }

    // remove leading whitespaces of the argument
    while (*input =='') {
        input++;
    }

    // remove leading and trailing whitespaces of the argument
    while (*input =='') {
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

    // check if the argument is a number
    if (sscanf(input, "%d", &input)!= 1) {
        printf("Not a number\n");
        exit(1);
    }

    // check if the argument is a number
    if (sscanf(input, "%d", &input)!= 1) {
        printf("Not a number\n");
        exit(1);
    }
}
