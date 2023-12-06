
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
    char *input_copy_end = strchr(input_copy,'');
    if (input_copy_end) {
        *input_copy_end = '\0';
    }

    // remove trailing whitespaces of the argument
    char *input_copy_end_2 = strchr(input_copy,'');
    if (input_copy_end_2) {
        *input_copy_end_2 = '\0';
    }
}
