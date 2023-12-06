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
    char *clean_input = strdup(input);
    int i;
    for (i = strlen(clean_input) - 1; i >= 0; i--) {
        if (clean_input[i]!='' && clean_input[i]!= '\t' && clean_input[i]!= '\n') {
            break;
        }
        clean_input[i] = '\0';
    }

    // print the argument
    printf("'%s'\n", clean_input);

    // free the argument
    free(clean_input);

    // exit with success
    return 0;
}
