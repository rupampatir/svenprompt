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
    char *input_copy_end = input_copy;
    while (input_copy_end > input_copy && isspace(*(input_copy_end-1))) {
        *(input_copy_end-1) = '\0';
        input_copy_end--;
    }

    // remove trailing whitespaces of the argument
    char *input_copy_end_n = strchr(input_copy, '\n');
    if (input_copy_end_n) {
        *(input_copy_end_n) = '\0';
    }

    // remove leading whitespaces of the argument
    char *input_copy_end_p = strchr(input_copy,'');
    if (input_copy_end_p) {
        *(input_copy_end_p) = '\0';
    }

    // remove trailing whitespaces of the argument
    char *input_copy_end_p_n = strchr(input_copy_end_p, '\n');
    if (input_copy_end_p_n) {
        *(input_copy_end_p_n) = '\0';
    }
}
