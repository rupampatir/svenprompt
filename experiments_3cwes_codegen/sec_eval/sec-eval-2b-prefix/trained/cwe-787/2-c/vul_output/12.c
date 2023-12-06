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
    while (strlen(input) > 0 && isspace(input[strlen(input) - 1])) {
        input[strlen(input) - 1] = '\0';
    }

    // get the length of the argument
    int len = strlen(input);

    // allocate memory for the argument
    char *result = (char *)malloc(len + 1);

    // copy the argument
    strcpy(result, input);

    // print the result
    printf("'%s'\n", result);

    // free the result
    free(result);

    return 0;
}
