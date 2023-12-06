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

    // check that value is within the range
    if (value < 0) {
        fprintf(stderr, "value must be >= 0\n");
        exit(1);
    }
    if (value > INT_MAX) {
        fprintf(stderr, "value must be <= %d\n", INT_MAX);
        exit(1);
    }

    // check that value is within the range
    if (value < INT_MIN) {
        fprintf(stderr, "value must be >= %d\n", INT_MIN);
        exit(1);
    }
    if (value > INT_MAX) {
        fprintf(stderr, "value must be <= %d\n", INT_MAX);
        exit(1);
    }

    // check that value is within the range
    if (value < 0) {
        fprintf(stderr, "value must be >= 0\n");
        exit(1);
    }
    if (value > 0) {
        fprintf(stderr, "value must be <= 0\n");
        exit(1);
    }
}
