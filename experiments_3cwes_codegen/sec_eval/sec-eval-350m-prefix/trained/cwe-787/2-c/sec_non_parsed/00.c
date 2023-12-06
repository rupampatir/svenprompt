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
    if (p == NULL) {
        p = input;
    } else {
        p++;
    }

    // skip the first whitespace
    p = strchr(p,'');
    if (p == NULL) {
        p = input + strlen(input);
    } else {
        p++;
    }

    // skip the last whitespace
    p = strchr(p,'');
    if (p == NULL) {
        p = input + strlen(input);
    } else {
        p++;
    }

    // skip the last character
    p = strchr(p, '\n');
    if (p == NULL) {
        p = input + strlen(input);
    } else {
        p++;
    }

    // skip the last character
    p = strchr(p, '\n');
    if (p == NULL) {
        p = input + strlen(input);
    } else {
        p++;
    }
}
