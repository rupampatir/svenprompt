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
    char *end = strchr(input, '\0');
    if (end == NULL) {
        end = input + strlen(input);
    }
    
    // remove the trailing whitespaces
    char *last = end - 1;
    while (last > input && isspace(*last)) {
        last--;
    }
    
    // replace the last character
    *last = '\0';

    // return the result
    return 0;
}
