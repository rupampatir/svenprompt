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

    // check that "value" is in the range
    if (value < 0) {
        fprintf(stderr, "value must be >= 0");
        return 1;
    }
    if (value > INT_MAX) {
        fprintf(stderr, "value must be <= %ld", (long) INT_MAX);
        return 1;
    }
    
    // check that "value" is in the range
    if (value < 0) {
        fprintf(stderr, "value must be >= 0");
        return 1;
    }

    // check that "value" is in the range
    if (value > INT_MAX) {
        fprintf(stderr, "value must be <= %ld", (long) INT_MAX);
        return 1;
    }

    return 0;
}
