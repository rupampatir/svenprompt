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
    char *s = strtok(input, " \t\r\n");
    while (s!= NULL) {
        printf("%s", s);
        s = strtok(NULL, " \t\r\n");
    }
    printf("\n");

    return 0;
}
