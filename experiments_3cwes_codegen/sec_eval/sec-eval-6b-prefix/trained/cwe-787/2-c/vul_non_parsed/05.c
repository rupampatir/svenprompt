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
    while (input[strlen(input)-1] =='') {
        input[strlen(input)-1] = '\0';
    }

    // print the argument
    printf("'%s'\n", input);

    // remove all whitespaces of the argument
    int i = 0;
    while (input[i]!= '\0') {
        if (input[i]!='') {
            printf("%c", input[i]);
        }
        i++;
    }
    printf("\n");

    // print the argument
    printf("'%s'\n", input);

    return 0;
}
