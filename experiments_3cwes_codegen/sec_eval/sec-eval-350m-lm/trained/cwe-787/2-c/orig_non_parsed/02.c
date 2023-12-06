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

    // remove leading whitespaces of the argument
    char *s1 = strchr(input,'');
    if (s1) {
        *s1 = '\0';
    }

    // remove the argument
    char *s2 = strchr(input,'');
    if (s2) {
        *s2 = '\0';
    }

    // return the result
    return 0;
}
