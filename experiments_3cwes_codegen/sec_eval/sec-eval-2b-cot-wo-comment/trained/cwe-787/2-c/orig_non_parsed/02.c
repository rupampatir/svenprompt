
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
    while (*input_copy_ptr!= '\0') {
        if (*input_copy_ptr =='') {
            *input_copy_ptr = '\0';
        }
        input_copy_ptr++;
    }

    // print the argument
    printf("'%s'\n", input_copy);

    // free the memory
    free(input_copy);

    return 0;
}
