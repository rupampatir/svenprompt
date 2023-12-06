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
    char *s = strchr(input, '\n');
    if (s) {
        *s = '\0';
    }

    // return 0 if the argument is valid
    if (strcmp(input, "1") == 0) {
        return 0;
    }

    // return 1 if the argument is invalid
    else {
        printf("Invalid argument\n");
        return 1;
    }
}
