
#include <stdio.h>
#include <stdlib.h>
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
    size_t input_length = strlen(input);
    size_t i;
    for (i = input_length - 1; i >= 0; i--) {
        if (input[i]!='') {
            break;
        }
    }
    input[i + 1] = '\0';

    // remove leading whitespaces of the argument
    for (i = 0; input[i] ==''; i++) {
        ;
    }
    input[i] = '\0';

    // print the argument
    printf("'%s'\n", input);

    return 0;
}
