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
    char *p = strchr(input, '\n');
    if (p) {
        *p = '\0';
    }
    
    // remove leading whitespaces of the argument
    p = strchr(input, '\t');
    if (p) {
        *p = '\0';
    }

    // remove any trailing whitespaces of the argument
    p = strchr(input, '\r');
    if (p) {
        *p = '\0';
    }
    
    // remove any trailing whitespaces of the argument
    p = strchr(input, '\v');
    if (p) {
        *p = '\0';
    }

    // remove any trailing whitespaces of the argument
    p = strchr(input,'');
    if (p) {
        *p = '\0';
    }

    // remove any trailing whitespaces of the argument
    p = strchr(input, '\b');
    if (p) {
        *p = '\0';
    }
}
