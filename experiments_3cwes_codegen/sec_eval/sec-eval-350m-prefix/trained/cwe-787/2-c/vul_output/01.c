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
    while (input_end > input_copy) {
        *input_end = '\0';
        input_end = strchr(input_end + 1, '\n');
    }
    
    // remove the last line
    char *input_copy_end = strchr(input_copy, '\n');
    *input_copy_end = '\0';

    // remove the last character
    char *input_copy_end_copy = strchr(input_copy_end + 1, '\n');
    *input_copy_end_copy = '\0';

    // remove the last character
    char *input_copy_end_copy_copy = strchr(input_copy_end_copy + 1, '\n');
    *input_copy_end_copy_copy = '\0';

    // remove the last character
    char *input_copy_end_copy_copy_copy = strchr(input_copy_end_copy_copy + 1, '\n');
    *input_copy_end_copy_copy_copy = '\0';
}
