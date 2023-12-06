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
    size_t i = strlen(input);
    while (i && isspace(input[i-1])) {
        input[i-1] = '\0';
    }

    // allocate memory for the string
    char *str = malloc(i + 1);
    if (!str) {
        printf("Out of memory\n");
        exit(1);
    }

    // copy the string
    strncpy(str, input, i);

    // free memory
    free(str);

    // return success
    return 0;
}
