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
    input = strchr(input,'');
    if (input!= NULL) {
        *input = '\0';
    }

    // remove leading and trailing whitespaces
    input = strchr(input,'');
    if (input!= NULL) {
        *input = '\0';
    }

    // remove the trailing newline
    input = strchr(input, '\n');
    if (input!= NULL) {
        *input = '\0';
    }

    return 0;
}
