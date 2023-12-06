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
    for (int i = len-1; i >= 0; i--) {
        if (input[i] =='') {
            input[i] = '\0';
        } else {
            break;
        }
    }

    // check if the argument is empty
    if (strlen(input) == 0) {
        printf("Argument is empty\n");
        exit(1);
    }

    // remove leading whitespaces
    int start = 0;
    for (int i = 0; i < len; i++) {
        if (input[i]!='') {
            start = i;
        }
    }

    // check if the argument is empty
    if (start == 0) {
        printf("Argument is empty\n");
        exit(1);
    }

    // check if the argument is empty
    if (start == len) {
        printf("Argument is empty\n");
        exit(1);
    }

    // get the last character
    char last = input[len-1];
}
