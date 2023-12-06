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
    char *input_no_whitespace = malloc(strlen(input)+1);
    int i = 0;
    while (input[i]!= '\0') {
        if (input[i]!='') {
            input_no_whitespace[i] = input[i];
        } else {
            i++;
        }
    }
    input_no_whitespace[i] = '\0';

    // print the argument without trailing whitespaces
    printf("'%s'\n", input_no_whitespace);

    // free the memory
    free(input_no_whitespace);

    return 0;
}
