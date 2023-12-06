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
    strcpy(input, input + strlen(input) - 1);

    // remove leading and trailing whitespaces
    strcpy(input, input + strlen(input) - 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);

    // remove any leading or trailing whitespace
    strcpy(input, strchr(input,'') + 1);
}
