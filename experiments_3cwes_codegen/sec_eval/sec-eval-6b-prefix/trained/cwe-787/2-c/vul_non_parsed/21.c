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
    int i = strlen(input) - 1;
    while (input[i] =='') {
        input[i] = '\0';
        i--;
    }

    // print the argument again, but with leading and trailing whitespaces removed
    printf("'%s'\n", input);

    // return success
    return 0;
}
