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
    char *temp = strchr(input, '\n');
    if (temp) {
        *temp = '\0';
    }

    // remove leading whitespaces of the argument
    temp = strchr(input,'');
    if (temp) {
        *temp = '\0';
    }

    // remove the argument
    temp = strchr(input, '\t');
    if (temp) {
        *temp = '\0';
    }

    // remove the argument
    temp = strchr(input, '\r');
    if (temp) {
        *temp = '\0';
    }

    // remove the argument
    temp = strchr(input, '\b');
    if (temp) {
        *temp = '\0';
    }

    // remove the argument
    temp = strchr(input, '\f');
    if (temp) {
        *temp = '\0';
    }

    // remove the argument
    temp = strchr(input, '\v');
    if (temp) {
        *temp = '\0';
    }
}
