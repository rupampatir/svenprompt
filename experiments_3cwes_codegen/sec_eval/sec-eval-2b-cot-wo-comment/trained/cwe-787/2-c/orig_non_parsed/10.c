
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // make sure 1 argument was provided
    if (argc!= 2) {
        printf("Need 1 argument\n");
        exit(1);
    }

    // get the argument
    char *input = argv[1];
    
    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    char *clean_arg = strchr(input,'');
    if (clean_arg) {
        *clean_arg = '\0';
    }

    // remove trailing whitespaces of the argument
    clean_arg = strchr(input, '\n');
    if (clean_arg) {
        *clean_arg = '\0';
    }

    // remove trailing whitespaces of the argument
    clean_arg = strchr(input, '\r');
    if (clean_arg) {
        *clean_arg = '\0';
    }
}
