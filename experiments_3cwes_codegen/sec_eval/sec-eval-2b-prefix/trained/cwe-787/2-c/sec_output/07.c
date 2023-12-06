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
    char *p = input + strlen(input) - 1;
    while (p > input && isspace(*p)) {
        *p-- = '\0';
    }

    // remove leading whitespaces of the argument
    char *q = input;
    while (*q && isspace(*q)) {
        q++;
    }

    // copy the argument to a new string
    char *new_string = malloc(sizeof(char) * (strlen(q) + 1));
    strncpy(new_string, q, strlen(q));
    new_string[strlen(q)] = '\0';

    // print the new string
    printf("'%s'\n", new_string);

    // free the argument
    free(new_string);

    return 0;
}
