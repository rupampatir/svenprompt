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
    char *input_copy = strdup(input);
    char *input_end = input_copy + strlen(input_copy);
    while (input_end > input_copy && isspace(*(input_end - 1))) {
        input_end--;
    }
    
    // remove leading whitespaces of the argument
    input_copy = strdup(input_copy);
    input_end = input_copy + strlen(input_copy);
    while (input_end > input_copy && isspace(*(input_end - 1))) {
        input_end--;
    }
    
    // remove the argument from the string
    strcpy(input_copy, input_end);

    // free memory
    free(input_copy);

    // return 0
    return 0;
}
