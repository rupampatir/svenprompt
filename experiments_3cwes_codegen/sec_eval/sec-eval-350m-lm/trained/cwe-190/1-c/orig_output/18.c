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
    if (value > INT_MAX) {
        fprintf(stderr, "value too large\n");
        return EXIT_FAILURE;
    }

    // check that value is within the range
    if (value < 0) {
        fprintf(stderr, "value too small\n");
        return EXIT_FAILURE;
    }

    // check that value is not negative
    if (value < 0) {
        fprintf(stderr, "value too small\n");
        return EXIT_FAILURE;
    }

    // check that value is not too large
    if (value > INT_MAX) {
        fprintf(stderr, "value too large\n");
        return EXIT_FAILURE;
    }

    // check that value is not too small
    if (value < -1) {
        fprintf(stderr, "value too small\n");
        return EXIT_FAILURE;
    }

    // check that value is not negative
    if (value < 0) {
        fprintf(stderr, "value too small\n");
        return EXIT_FAILURE;
    }
}
