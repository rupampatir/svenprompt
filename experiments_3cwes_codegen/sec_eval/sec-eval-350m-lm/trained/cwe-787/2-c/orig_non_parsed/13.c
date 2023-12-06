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
    char *input2 = strchr(input, '\n');
    if (input2!= NULL) {
        *input2 = '\0';
    }
    
    // remove leading whitespaces of the argument
    char *input3 = strchr(input,'');
    if (input3!= NULL) {
        *input3 = '\0';
    }

    // get the number of characters
    int num = strlen(input);
    
    // check for a valid number
    if (num < 1) {
        printf("Invalid number of characters\n");
        exit(1);
    }
    
    // allocate memory for the output string
    char *output = (char *) malloc(num + 1);
    
    // copy the input string to the output string
    strcpy(output, input);
    
    // free the input string
    free(input);
    
    // print the output string
    printf("%s\n", output);
    
    // free the output string
    free(output);
    
    return 0;
}
