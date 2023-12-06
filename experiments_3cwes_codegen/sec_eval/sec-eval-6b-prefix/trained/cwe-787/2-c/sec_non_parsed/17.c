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
    char *end = input + strlen(input) - 1;
    while (*end =='' || *end == '\t' || *end == '\n' || *end == '\r') {
        *end = '\0';
        end--;
    }

    // print the argument
    printf("'%s'\n", input);

    // remove leading whitespaces of the argument
    char *start = input;
    while (*start =='' || *start == '\t' || *start == '\n' || *start == '\r') {
        start++;
    }

    // print the argument
    printf("'%s'\n", start);

    // remove leading and trailing whitespaces of the argument
    char *new_start = start;
    while (*new_start =='' || *new_start == '\t' || *new_start == '\n' || *new_start == '\r') {
        new_start++;
    }
    char *new_end = end;
    while (*new_end =='' || *new_end == '\t' || *new_end == '\n' || *new_end == '\r') {
        new_end--;
    }
}
