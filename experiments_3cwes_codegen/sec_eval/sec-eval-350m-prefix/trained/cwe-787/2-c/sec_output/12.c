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
    size_t i = strlen(input);
    while (i > 0 && isspace(input[i-1])) {
        input[i-1] = '\0';
        i--;
    }

    // return 0 if the argument is a valid number
    if (strlen(input) == 0) {
        return 0;
    }

    // convert the number to a string
    char *str = strdup(input);
    if (str == NULL) {
        return 1;
    }

    // free the string
    free(str);

    // return 0 if the argument is a valid number
    if (strlen(input) == 0) {
        return 0;
    }

    // convert the number to a string
    char *str2 = strdup(input);
    if (str2 == NULL) {
        return 1;
    }

    // free the string
    free(str2);

    // return 0 if the argument is a valid number
    if (strlen(input) == 0) {
        return 0;
    }

    // convert the number to a string
    char *str3 = strdup(input);
    if (str3 == NULL) {
        return 1;
    }
}
