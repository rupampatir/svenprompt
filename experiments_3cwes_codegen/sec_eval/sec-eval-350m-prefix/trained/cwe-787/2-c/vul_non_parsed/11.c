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
    if (input2) {
        *input2 = '\0';
    }

    // remove leading whitespaces of the argument
    char *input3 = strchr(input,'');
    if (input3) {
        *input3 = '\0';
    }

    // get the value of the string
    char *value = strchr(input, '=');
    if (value) {
        *value++ = '\0';
    }

    // get the value of the string
    char *value2 = strchr(input2, '=');
    if (value2) {
        *value2++ = '\0';
    }

    // get the value of the string
    char *value3 = strchr(input3, '=');
    if (value3) {
        *value3++ = '\0';
    }

    // get the value of the string
    char *value4 = strchr(input4, '=');
    if (value4) {
        *value4++ = '\0';
    }
}
