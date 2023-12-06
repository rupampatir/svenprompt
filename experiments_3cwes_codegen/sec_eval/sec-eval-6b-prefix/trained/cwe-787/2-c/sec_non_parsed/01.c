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
    while (length > 0 && input[length-1] =='') {
        length--;
    }
    input[length] = '\0';

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // copy the argument
    char *output = malloc(length + 1);
    strncpy(output, input, length);
    output[length] = '\0';

    // print the argument
    printf("'%s'\n", output);

    // free the argument
    free(output);

    // return success
    return 0;
}
