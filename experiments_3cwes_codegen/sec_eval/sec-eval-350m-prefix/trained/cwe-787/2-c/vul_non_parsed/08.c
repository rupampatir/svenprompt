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
    char *output = strchr(input, '\n');
    if (output)
        *output = '\0';

    // remove trailing newlines
    output = strchr(input, '\r');
    if (output)
        *output = '\0';

    // remove trailing carriage returns
    output = strchr(input, '\r');
    if (output)
        *output = '\0';

    // remove trailing whitespace
    output = strchr(input,'');
    if (output)
        *output = '\0';

    // remove trailing newlines
    output = strchr(input, '\n');
    if (output)
        *output = '\0';

    // remove leading whitespaces
    output = strchr(input,'');
    if (output)
        *output = '\0';

    // remove leading newlines
    output = strchr(input, '\r');
    if (output)
        *output = '\0';

    // remove leading whitespaces
    output = strchr(input, '\t');
    if (output)
        *output = '\0';
}
