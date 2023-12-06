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
    input = strchr(input,'');
    if (input) {
        input++;
    }
    
    // remove leading whitespaces
    input = strchr(input,'');
    if (input) {
        input++;
    }

    // remove the argument
    input = strchr(input,'');
    if (input) {
        input++;
    }

    // get the number
    int number = atoi(input);

    // print the number
    printf("%d\n", number);

    // return 0
    return 0;
}
