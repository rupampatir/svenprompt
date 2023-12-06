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
    input = strchr(input, '\0');
    while (input!= NULL) {
        if (input[0] =='') {
            input[0] = '-';
        }
        input++;
    }

    // remove trailing newlines
    input = strchr(input, '\n');
    while (input!= NULL) {
        if (input[0] == '\r') {
            input[0] = '-';
        }
        input++;
    }

    // remove trailing whitespace
    input = strchr(input, '\0');
    while (input!= NULL) {
        if (input[0] =='') {
            input[0] = '-';
        }
        input++;
    }

    // remove leading whitespaces
    input = strchr(input, '\0');
    while (input!= NULL) {
        if (input[0] =='') {
            input[0] = '-';
        }
        input++;
    }
}
