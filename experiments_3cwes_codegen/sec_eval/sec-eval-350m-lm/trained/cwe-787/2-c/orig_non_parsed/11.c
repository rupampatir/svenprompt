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
        *p = 0;
    }

    // remove the argument
    input = strchr(input,'');
    if (input) {
        *input = 0;
    }

    // print the result
    printf("'%s'\n", input);

    return 0;
}
