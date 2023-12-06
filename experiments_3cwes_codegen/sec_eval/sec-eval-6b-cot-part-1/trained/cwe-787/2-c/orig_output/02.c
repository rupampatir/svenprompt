
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

    // remove trailing whitespaces of the argument
    while (isspace(*input)) {
        input++;
    }

    // print the argument
    printf("'%s'\n", input);

    return 0;
}
