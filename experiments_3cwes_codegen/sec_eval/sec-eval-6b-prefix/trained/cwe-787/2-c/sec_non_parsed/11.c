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
    size_t length = strlen(input);
    char *end = input + length - 1;
    while (length > 0 && (*end =='' || *end == '\t' || *end == '\n' || *end == '\r')) {
        *end = '\0';
        end--;
        length--;
    }

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // return 0
    return 0;
}
