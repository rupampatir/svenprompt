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
    char *end = input + strlen(input) - 1;
    while (end > input && *end =='') {
        *end = '\0';
        end--;
    }

    // print the argument again with the trailing whitespaces removed
    printf("'%s'\n", input);

    // return success
    return 0;
}
