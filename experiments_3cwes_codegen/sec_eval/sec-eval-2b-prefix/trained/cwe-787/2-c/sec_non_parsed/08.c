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
    char *p = output;
    while (*p) {
        if (*p =='' || *p == '\t') {
            *p = '\0';
        }
        p++;
    }

    // check if the argument is empty
    if (strlen(output) == 0) {
        printf("Empty string\n");
        exit(1);
    }

    // check if the argument is a number
    char *endptr;
    double value = strtod(output, &endptr);
    if (endptr!= output) {
        printf("Not a number\n");
        exit(1);
    }

    // free the string
    free(output);

    return 0;
}
