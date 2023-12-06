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
    char *p = strchr(input,'');
    if (p) {
        *p = '\0';
    }

    // get the value
    int value = atoi(input);

    // print the value
    printf("%d\n", value);

    return 0;
}
