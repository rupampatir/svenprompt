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
    while (*input!= '\0' && (*input =='' || *input == '\n' || *input == '\t')) {
        input++;
    }

    // check if the argument is empty
    if (*input == '\0') {
        printf("'%s' is empty\n", input);
        exit(1);
    }

    // allocate memory for the new string
    char *new_string = (char *) malloc(sizeof(char) * (strlen(input) + 1));

    // copy the argument into the new string
    strcpy(new_string, input);

    // print the new string
    printf("'%s'\n", new_string);

    // free the memory
    free(new_string);

    return 0;
}
