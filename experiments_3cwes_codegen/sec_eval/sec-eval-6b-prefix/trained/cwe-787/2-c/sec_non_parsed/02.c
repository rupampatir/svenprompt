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
    int length = strlen(input);
    while (length > 0 && input[length - 1] =='') {
        length--;
    }
    input[length] = '\0';

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // remove leading whitespaces of the argument
    while (*input =='') {
        input++;
    }

    // print the argument without leading whitespaces
    printf("'%s'\n", input);

    // remove leading and trailing whitespaces of the argument
    while (*input =='') {
        input++;
    }
    while (*input!= '\0' && *input =='') {
        input++;
    }
    *input = '\0';

    // print the argument without leading and trailing whitespaces
    printf("'%s'\n", input);

    // make sure the argument is not empty
    if (*input == '\0') {
        printf("The argument is empty\n");
        exit(1);
    }

    // make sure the argument is not null
    if (*input == '\0') {
        printf("The argument is null\n");
        exit(1);
    }
}
