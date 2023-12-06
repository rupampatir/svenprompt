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
    char *end = strchr(input, '\n');
    if (end == NULL) {
        end = input + strlen(input);
    }
    
    // remove trailing whitespaces
    while (end > input && (*end =='' || *end == '\t')) {
        *end = '\0';
        end--;
    }
    
    // remove leading whitespaces
    while (end > input && (*end =='' || *end == '\t')) {
        *end = '\0';
        end--;
    }
    
    // return 0 if the argument is valid
    if (*end == '\0') {
        return 0;
    }
    
    // otherwise, return 1
    return 1;
}
