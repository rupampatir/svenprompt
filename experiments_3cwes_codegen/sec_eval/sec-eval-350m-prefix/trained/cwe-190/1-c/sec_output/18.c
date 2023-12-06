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

    // check if value is out of range
    if (value < 0) {
        fprintf(stderr, "value is out of range");
        return EXIT_FAILURE;
    }

    // check if value is within range
    if (value > INT_MAX) {
        fprintf(stderr, "value is out of range");
        return EXIT_FAILURE;
    }

    // check if value is within range
    if (value < INT_MIN) {
        fprintf(stderr, "value is out of range");
        return EXIT_FAILURE;
    }

    // check if value is within range
    if (value > INT_MAX) {
        fprintf(stderr, "value is out of range");
        return EXIT_FAILURE;
    }

    // check if value is within range
    if (value < INT_MIN) {
        fprintf(stderr, "value is out of range");
        return EXIT_FAILURE;
    }
}
