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
    value += 100000000;

    // check for overflow
    if (value > INT_MAX) {
        fprintf(stderr, "Value %d is too large, it must be less than %d\n", value, INT_MAX);
        exit(1);
    }

    // check for overflow
    if (value < 0) {
        fprintf(stderr, "Value %d is negative, it must be positive\n", value);
        exit(1);
    }

    // check for overflow
    if (value > INT_MAX) {
        fprintf(stderr, "Value %d is too large, it must be less than %d\n", value, INT_MAX);
        exit(1);
    }

    // check for overflow
    if (value < 0) {
        fprintf(stderr, "Value %d is negative, it must be positive\n", value);
        exit(1);
    }

    // check for overflow
    if (value > INT_MAX) {
        fprintf(stderr, "Value %d is too large, it must be less than %d\n", value, INT_MAX);
        exit(1);
    }
}
