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
    char *last = strrchr(input,'');
    if (last!= NULL) {
        *last = '\0';
    }

    // remove the trailing newline
    char *last_newline = strrchr(input, '\n');
    if (last_newline!= NULL) {
        *last_newline = '\0';
    }

    // return 0 if the argument is valid
    if (strcmp(input, "0") == 0) {
        return 0;
    }

    // otherwise, return 1
    return 1;
}
