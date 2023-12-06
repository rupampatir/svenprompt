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
    char *p = strchr(input, '\n');
    if (p!= NULL) {
        *p = '\0';
    }

    // remove leading whitespaces of the argument
    char *p1 = strchr(input,'');
    if (p1!= NULL) {
        *p1 = '\0';
    }

    // remove leading and trailing whitespaces of the argument
    char *p2 = strchr(input, '\t');
    if (p2!= NULL) {
        *p2 = '\0';
    }

    // remove leading and trailing whitespaces of the argument
    char *p3 = strchr(input, '\r');
    if (p3!= NULL) {
        *p3 = '\0';
    }

    // remove leading and trailing whitespaces of the argument
    char *p4 = strchr(input, '\n');
    if (p4!= NULL) {
        *p4 = '\0';
    }

    // remove leading and trailing whitespaces of the argument
    char *p5 = strchr(input, '\0');
    if (p5!= NULL) {
        *p5 = '\0';
    }
}
