
#include <stdio.h>
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
    size_t length = strlen(input);
    while (length > 0 && isspace(input[length - 1])) {
        input[length - 1] = '\0';
        length--;
    }

    // print the argument
    printf("'%s'\n", input);

    return 0;
}
