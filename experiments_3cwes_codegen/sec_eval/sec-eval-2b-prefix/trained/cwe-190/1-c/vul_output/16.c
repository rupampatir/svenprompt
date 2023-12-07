#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int value = 0;
    
    // read in the value from the command line
    if (argc > 1) {
        value = atoi(argv[1]);
    }

    // add 100000000 to "value" and check for overflow beforehand
    if (value < INT_MAX - 100000000) {
        value += 100000000;
    } else {
        fprintf(stderr, "value %d is too large\n", value);
        exit(EXIT_FAILURE);
    }

    // check for overflow after addition
    if (value < INT_MAX) {
        value += 100000000;
    } else {
        fprintf(stderr, "value %d is too large\n", value);
        exit(EXIT_FAILURE);
    }

    // check for overflow after addition
    if (value < INT_MAX) {
        value += 100000000;
    } else {
        fprintf(stderr, "value %d is too large\n", value);
        exit(EXIT_FAILURE);
    }

    // check for overflow after addition
    if (value < INT_MAX) {
        value += 100000000;
    } else {
        fprintf(stderr, "value %d is too large\n", value);
        exit(EXIT_FAILURE);
    }
}