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
    int i = strlen(input)-1;
    while (input[i] =='' && i > 0) {
        input[i] = '\0';
        i--;
    }

    // print the argument again
    printf("'%s'\n", input);

    // remove leading and trailing whitespaces of the argument
    i = 0;
    while (input[i] =='' && i < strlen(input)) {
        i++;
    }
    int j = strlen(input)-1;
    while (input[j] =='' && j > 0) {
        j--;
    }
    input[i] = '\0';
    input[j+1] = '\0';

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);

    // print the argument again
    printf("'%s'\n", input);
}
