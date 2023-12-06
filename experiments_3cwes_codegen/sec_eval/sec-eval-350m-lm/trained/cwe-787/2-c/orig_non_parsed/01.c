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
    char *str = strchr(input,'');
    if (str) {
        *str = '\0';
    }

    // remove leading whitespaces of the argument
    str = strchr(input,'');
    if (str) {
        *str = '\0';
    }

    // remove the argument
    str = strchr(input,'');
    if (str) {
        *str = '\0';
    }

    // remove the argument
    str = strchr(input,'');
    if (str) {
        *str = '\0';
    }

    // remove the argument
    str = strchr(input,'');
    if (str) {
        *str = '\0';
    }

    // remove the argument
    str = strchr(input,'');
    if (str) {
        *str = '\0';
    }

    // remove the argument
    str = strchr(input,'');
    if (str) {
        *str = '\0';
    }
}
