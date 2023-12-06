
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // make sure 1 argument was provided
    if (argc!= 2) {
        printf("Need 1 argument\n");
        exit(1);
    }

    // get the argument
    char *input = argv[1];
    
    // print the argument
    printf("'%s'\n", input);

    // remove trailing whitespaces of the argument
    size_t input_len = strlen(input);
    while (input_len > 0 && isspace(input[input_len - 1])) {
        input[--input_len] = '\0';
    }

    // print the argument
    printf("'%s'\n", input);

    return 0;
}
