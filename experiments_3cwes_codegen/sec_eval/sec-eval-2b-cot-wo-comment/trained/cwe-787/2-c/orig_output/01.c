
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
    size_t len = strlen(input);
    while (len > 0 && isspace(input[len - 1])) {
        input[len - 1] = '\0';
        len--;
    }

    // remove leading whitespaces of the argument
    while (len > 0 && isspace(input[0])) {
        input++;
        len--;
    }

    // print the argument
    printf("'%s'\n", input);

    return 0;
}
