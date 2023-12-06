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
    char *end = strpbrk(input, " \t\f\r");
    if (end == NULL) {
        printf("'%s' is not a valid input\n", input);
        exit(1);
    }

    // get the number of characters in the argument
    int num_chars = end - input;

    // allocate memory for the string
    char *string = malloc(num_chars + 1);

    // copy the argument to the string
    strncpy(string, input, num_chars);

    // free the memory
    free(string);

    // return the number of characters copied
    return num_chars;
}
