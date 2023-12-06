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
    while (*input && isspace(*input)) {
        input++;
    }

    // check if there is a string
    if (*input == '\0') {
        printf("No string\n");
        exit(1);
    }

    // get the length of the string
    int length = strlen(input);

    // allocate space for the string
    char *output = malloc(length + 1);

    // copy the string
    strcpy(output, input);

    // print the string
    printf("'%s'\n", output);

    // free the allocated space
    free(output);

    // return success
    return 0;
}
