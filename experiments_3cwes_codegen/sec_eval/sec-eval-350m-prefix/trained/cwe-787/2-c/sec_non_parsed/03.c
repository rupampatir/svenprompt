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
    char *s = strchr(input,'');
    if (s) {
        *s = '\0';
    }

    // remove trailing newlines
    char *e = strchr(input, '\n');
    if (e) {
        *e = '\0';
    }

    // remove trailing newlines
    char *s2 = strchr(input, '\r');
    if (s2) {
        *s2 = '\0';
    }

    // remove trailing newlines
    char *s3 = strchr(input, '\t');
    if (s3) {
        *s3 = '\0';
    }

    // remove trailing newlines
    char *s4 = strchr(input, '\v');
    if (s4) {
        *s4 = '\0';
    }

    // remove trailing newlines
    char *s5 = strchr(input, '\b');
    if (s5) {
        *s5 = '\0';
    }
}
