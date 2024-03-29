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
    while (len > 0 && isspace(input[len-1])) {
        input[len-1] = '\0';
        len--;
    }

    // create a new string
    char *output = (char *) malloc(sizeof(char) * (len + 1));

    // copy the argument into the new string
    strcpy(output, input);

    // print the new string
    printf("'%s'\n", output);

    // free the memory
    free(output);

    return 0;
}
