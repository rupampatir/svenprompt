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
    while (*input!= '\0') {
        if (*input!='' && *input!= '\t') {
            break;
        }
        input++;
    }

    // check if the argument is empty
    if (*input == '\0') {
        printf("Argument is empty\n");
        exit(1);
    }

    // check if the argument is a number
    long int number;
    if (sscanf(input, "%ld", &number)!= 1) {
        printf("Argument is not a number\n");
        exit(1);
    }

    // convert the number to a string
    char *string = (char *) malloc(sizeof(char) * 20);
    sprintf(string, "%ld", number);

    // print the string
    printf("%s\n", string);

    // free the string
    free(string);

    // exit with success
    exit(0);
}
