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
    char *input2 = strchr(input,'');
    if (input2!= NULL) {
        *input2 = '\0';
    }

    // remove the first whitespace from the argument
    input = strchr(input,'');
    if (input!= NULL) {
        *input = '\0';
    }

    // remove the last whitespace from the argument
    input = strchr(input, '\n');
    if (input!= NULL) {
        *input = '\0';
    }

    // remove the first and last whitespaces from the argument
    input = strchr(input, '\t');
    if (input!= NULL) {
        *input = '\0';
    }

    // remove the first and last whitespace from the argument
    input = strchr(input, '\r');
    if (input!= NULL) {
        *input = '\0';
    }

    // remove the first and last whitespace from the argument
    input = strchr(input, '\f');
    if (input!= NULL) {
        *input = '\0';
    }
}
