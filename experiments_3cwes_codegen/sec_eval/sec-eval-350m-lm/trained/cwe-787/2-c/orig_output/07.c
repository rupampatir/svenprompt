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
    char *output = strchr(input, '\n');
    if (output) {
        *output = '\0';
    }

    // remove trailing whitespaces of the argument
    char *output1 = strchr(input, '\t');
    if (output1) {
        *output1 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *output2 = strchr(input, '\r');
    if (output2) {
        *output2 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *output3 = strchr(input, '\f');
    if (output3) {
        *output3 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *output4 = strchr(input, '\v');
    if (output4) {
        *output4 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *output5 = strchr(input, '\b');
    if (output5) {
        *output5 = '\0';
    }
}
