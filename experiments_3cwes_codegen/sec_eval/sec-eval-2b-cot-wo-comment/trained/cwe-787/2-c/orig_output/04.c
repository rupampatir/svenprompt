
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // make sure 1 argument was provided
    if (argc!= 2) {
        printf("Need 1 argument\n");
        exit(1);
    }

    // get the argument
    char *input = argv[1];
    
    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    char *input_copy = strdup(input);
    char *input_copy_ptr = input_copy;
    while (isspace(*input_copy_ptr)) {
        input_copy_ptr++;
    }
    char *input_copy_end = input_copy_ptr + strlen(input_copy_ptr);
    while (input_copy_end > input_copy_ptr) {
        if (isspace(*input_copy_end)) {
            *input_copy_end = '\0';
            break;
        }
        input_copy_end--;
    }
    free(input_copy);

    return 0;
}
