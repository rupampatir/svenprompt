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
    char *p = strchr(input,'');
    if (p!= NULL) {
        *p = '\0';
    }

    // remove leading whitespaces of the argument
    p = strchr(input,'');
    if (p!= NULL) {
        *p = '\0';
    }

    // remove all whitespaces
    p = strchr(input,'');
    if (p!= NULL) {
        *p = '\0';
    }

    // remove the argument
    p = strchr(input,'');
    if (p!= NULL) {
        *p = '\0';
    }

    // return 0 if the argument is valid
    if (strcmp(input, "quit") == 0) {
        exit(0);
    }

    // return 1 if the argument is not valid
    if (strcmp(input, "help") == 0) {
        printf("Usage: %s [input]\n", argv[0]);
        exit(1);
    }
}
