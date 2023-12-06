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
    char *p = strpbrk(input, " \t");
    if (p == NULL) {
        printf("No trailing whitespaces found\n");
    } else {
        *p = '\0';
    }

    // return 0
    return 0;
}
