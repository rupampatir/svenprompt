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
    while (isspace(*input)) {
        input++;
    }

    // remove leading whitespaces of the argument
    while (*input =='') {
        input++;
    }

    // get the length of the argument
    int len = strlen(input);

    // get the position of the first non-whitespace character
    int pos = 0;
    while (pos < len && isspace(input[pos])) {
        pos++;
    }

    // get the position of the last non-whitespace character
    int end = pos + 1;
    while (end < len && isspace(input[end])) {
        end++;
    }

    // print the first part of the argument
    printf("%s", input);

    // print the second part of the argument
    printf("%s", &input[pos]);

    return 0;
}
