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
    char *p = strchr(input, '\0');
    if (p == NULL) {
        printf("'%s' is not a valid input\n", input);
        return 1;
    }
    *p = '\0;';

    // get the number of characters in the argument
    int len = strlen(input);

    // allocate the memory for the array
    char **array = (char **) malloc(len * sizeof(char *));
    if (array == NULL) {
        printf("Failed to allocate memory for the array\n");
        return 1;
    }

    // fill the array with the characters
    for (int i = 0; i < len; i++) {
        array[i] = &input[i * strlen(input)];
    }

    // print the array
    printf("%d characters in the input\n", len);

    // print the array
    for (int i = 0; i < len; i++) {
        printf("%c", array[i]);
    }

    // free the memory
    free(array);

    return 0;
}
