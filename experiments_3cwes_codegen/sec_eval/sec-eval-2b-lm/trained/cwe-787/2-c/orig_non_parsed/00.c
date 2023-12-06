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
    while (input[strlen(input) - 1] =='') {
        input[strlen(input) - 1] = '\0';
    }

    // check if the argument is empty
    if (strlen(input) == 0) {
        printf("The argument is empty\n");
        exit(1);
    }

    // check if the argument is not empty
    if (strlen(input) == 1) {
        printf("The argument is empty\n");
        exit(1);
    }

    // check if the argument is not empty
    if (strlen(input) == 2) {
        printf("The argument is empty\n");
        exit(1);
    }

    // check if the argument is not empty
    if (strlen(input) == 3) {
        printf("The argument is empty\n");
        exit(1);
    }

    // check if the argument is not empty
    if (strlen(input) == 4) {
        printf("The argument is empty\n");
        exit(1);
    }

    // check if the argument is not empty
    if (strlen(input) == 5) {
        printf("The argument is empty\n");
        exit(1);
    }
}
