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
    char *input_end = strchr(input_copy, '\n');
    if (input_end!= NULL) {
        *input_end = '\0';
    }

    // remove leading and trailing whitespaces
    char *input_copy_1 = strdup(input_copy);
    char *input_end_1 = strchr(input_copy_1, '\n');
    if (input_end_1!= NULL) {
        *input_end_1 = '\0';
    }

    // remove the argument from the input
    free(input_copy);

    // return 0
    return 0;
}
