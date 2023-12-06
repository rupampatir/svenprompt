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
    char *input_trimmed = strdup(input);
    int len = strlen(input_trimmed);
    while (len > 0 && isspace(input_trimmed[len - 1])) {
        input_trimmed[len - 1] = '\0';
        len--;
    }

    // print the argument
    printf("'%s'\n", input_trimmed);

    // free the argument
    free(input_trimmed);

    // exit
    exit(0);
}
