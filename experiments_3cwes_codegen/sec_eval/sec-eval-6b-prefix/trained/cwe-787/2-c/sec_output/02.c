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
    size_t len = strlen(input);
    while (len > 0 && isspace(input[len - 1])) {
        --len;
    }
    input[len] = '\0';

    // print the argument without trailing whitespaces
    printf("'%s'\n", input);

    // print the argument with leading whitespaces
    printf("'%*s'\n", (int) len, input);

    // print the argument with trailing whitespaces
    printf("'%s%*s'\n", input, (int) (len - 1), " ");

    // print the argument with leading and trailing whitespaces
    printf("'%*s%*s'\n", (int) len, " ", (int) (len - 1), " ");

    // print the argument with leading and trailing whitespaces
    printf("'%s%*s%*s'\n", input, (int) (len - 1), " ", (int) len, " ");

    // print the argument with leading whitespaces and trailing whitespaces
    printf("'%*s%*s'\n", (int) len, input, (int) (len - 1), " ");
}
