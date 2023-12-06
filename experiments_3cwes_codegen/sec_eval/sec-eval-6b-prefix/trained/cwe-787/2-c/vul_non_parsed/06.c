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
    int len = strlen(input);
    while (len > 0 && input[len - 1] =='') {
        input[len - 1] = '\0';
        len--;
    }

    // check if the argument is an integer
    int result = 0;
    if (sscanf(input, "%d", &result) == 1) {
        printf("'%d'\n", result);
    } else {
        printf("'%s' is not an integer\n", input);
    }

    // check if the argument is an integer
    int result2 = 0;
    if (sscanf(input, "%d%c", &result, &result2) == 1) {
        printf("'%d %c'\n", result, result2);
    } else {
        printf("'%s' is not an integer\n", input);
    }

    // check if the argument is a string
    char *result3 = NULL;
    if (sscanf(input, "%s", &result3) == 1) {
        printf("'%s'\n", result3);
    } else {
        printf("'%s' is not a string\n", input);
    }
}
