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
    while (i > 0 && isspace(input[i-1])) {
        input[i-1] = '\0';
        i--;
    }

    // remove leading whitespaces of the argument
    while (i > 0 && isspace(input[0])) {
        input[0] = '\0';
        i--;
    }

    // copy the string to a new buffer
    char *new_input = new char[i+1];
    strncpy(new_input, input, i);
    new_input[i] = '\0';

    // free the old string
    delete [] input;

    // run the program
    return 0;
}
