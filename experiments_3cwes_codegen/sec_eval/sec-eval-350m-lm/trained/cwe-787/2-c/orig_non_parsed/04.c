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
    char *end = strchr(input, '\n');
    if (end) {
        *end = '\0';
    }

    // remove trailing whitespaces of the argument
    char *end2 = strchr(input, '\t');
    if (end2) {
        *end2 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *end3 = strchr(input, '\r');
    if (end3) {
        *end3 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *end4 = strchr(input, '\v');
    if (end4) {
        *end4 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *end5 = strchr(input,'');
    if (end5) {
        *end5 = '\0';
    }

    // remove trailing whitespaces of the argument
    char *end6 = strchr(input, '\b');
    if (end6) {
        *end6 = '\0';
    }
}
