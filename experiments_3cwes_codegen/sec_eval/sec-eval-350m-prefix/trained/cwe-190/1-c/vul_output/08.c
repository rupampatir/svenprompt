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

    // check that value is within the range of 0 to 2^63-1
    if (value > (INT_MAX / 2)) {
        fprintf(stderr, "value too large\n");
        exit(1);
    } else if (value < (INT_MIN / 2)) {
        fprintf(stderr, "value too small\n");
        exit(1);
    }

    // add 100 to "value" to make it look like a value that is
    // not a power of two
    value += 100;

    // check that value is not greater than 2^63-1
    if (value > INT_MAX) {
        fprintf(stderr, "value too large\n");
        exit(1);
    }

    // check that value is not less than 0
    if (value < INT_MIN) {
        fprintf(stderr, "value too small\n");
        exit(1);
    }

    // print out the value
    fprintf(stdout, "%d\n", value);

    return 0;
}
