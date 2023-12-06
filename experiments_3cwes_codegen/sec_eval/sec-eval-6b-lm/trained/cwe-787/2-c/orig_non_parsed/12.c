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
    while (input[strlen(input)-1] =='') {
        input[strlen(input)-1] = '\0';
    }

    // print the argument
    printf("'%s'\n", input);

    // add a trailing whitespace to the argument
    strcat(input, " ");

    // print the argument
    printf("'%s'\n", input);

    // remove the trailing whitespaces of the argument
    while (input[strlen(input)-1] =='') {
        input[strlen(input)-1] = '\0';
    }

    // print the argument
    printf("'%s'\n", input);

    // remove the leading whitespaces of the argument
    while (input[0] =='') {
        input++;
    }

    // print the argument
    printf("'%s'\n", input);

    // add a leading whitespace to the argument
    strcpy(input, " ");

    // print the argument
    printf("'%s'\n", input);

    // remove the leading whitespaces of the argument
    while (input[0] =='') {
        input++;
    }
}
