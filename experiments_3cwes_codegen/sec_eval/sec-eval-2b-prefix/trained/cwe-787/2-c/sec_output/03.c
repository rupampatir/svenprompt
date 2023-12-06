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
    char *output = strdup(input);
    char *ptr = output + strlen(output) - 1;
    while (ptr >= output && isspace(*ptr)) {
        *ptr-- = '\0';
    }

    // print the argument
    printf("'%s'\n", output);

    // free the argument
    free(output);

    // exit with success
    return 0;
}
