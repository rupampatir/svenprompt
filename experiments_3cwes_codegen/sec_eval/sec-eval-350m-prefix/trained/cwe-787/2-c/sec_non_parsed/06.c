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

    // remove trailing newlines
    char *p1 = strchr(input, '\n');
    if (p1) {
        *p1 = '\0';
    }

    // remove trailing whitespaces
    char *p2 = strchr(input, '\t');
    if (p2) {
        *p2 = '\0';
    }

    // remove trailing whitespaces
    char *p3 = strchr(input, '\b');
    if (p3) {
        *p3 = '\0';
    }

    // remove trailing whitespaces
    char *p4 = strchr(input, '\r');
    if (p4) {
        *p4 = '\0';
    }

    // remove trailing whitespaces
    char *p5 = strchr(input, '\f');
    if (p5) {
        *p5 = '\0';
    }
}
