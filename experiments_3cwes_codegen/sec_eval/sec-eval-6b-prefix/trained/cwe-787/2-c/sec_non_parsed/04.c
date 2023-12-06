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
    while (*input && (*input =='' || *input == '\t' || *input == '\n' || *input == '\r')) {
        input++;
    }
    
    // make sure the argument is not empty
    if (*input == '\0') {
        printf("Empty argument\n");
        exit(1);
    }

    // make a copy of the argument
    char *copy = malloc(strlen(input) + 1);
    strcpy(copy, input);

    // print the argument
    printf("'%s'\n", copy);

    // remove leading and trailing whitespaces of the argument
    while (*copy && (*copy =='' || *copy == '\t' || *copy == '\n' || *copy == '\r')) {
        copy++;
    }
    while (*copy && (*copy =='' || *copy == '\t' || *copy == '\n' || *copy == '\r')) {
        copy++;
    }
    
    // make sure the argument is not empty
    if (*copy == '\0') {
        printf("Empty argument\n");
        exit(1);
    }
}
