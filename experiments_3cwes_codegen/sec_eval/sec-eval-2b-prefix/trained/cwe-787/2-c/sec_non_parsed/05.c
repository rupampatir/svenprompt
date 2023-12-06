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
    int input_len = strlen(input);
    int i;
    for (i = input_len - 1; i >= 0; i--) {
        if (input[i]!='')
            break;
        input[i] = '\0';
    }

    // remove leading whitespaces
    for (i = 0; i < input_len; i++) {
        if (input[i]!='')
            break;
        input[i] = '\0';
    }

    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    input_len = strlen(input);
    for (i = input_len - 1; i >= 0; i--) {
        if (input[i]!='')
            break;
        input[i] = '\0';
    }

    // remove leading whitespaces
    for (i = 0; i < input_len; i++) {
        if (input[i]!='')
            break;
        input[i] = '\0';
    }

    // print the argument
    printf("'%s'\n", input);
}
