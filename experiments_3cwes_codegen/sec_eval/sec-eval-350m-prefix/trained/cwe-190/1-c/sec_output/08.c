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

    // check that value is within the allowed range
    if (value < 0) {
        fprintf(stderr, "Value %d is out of the allowed range.\n", value);
        return 1;
    }
    if (value > INT_MAX) {
        fprintf(stderr, "Value %d is out of the allowed range.\n", value);
        return 1;
    }
    
    // check that value is within the allowed range
    if (value < 0) {
        fprintf(stderr, "Value %d is out of the allowed range.\n", value);
        return 1;
    }
    
    // check that value is within the allowed range
    if (value > INT_MAX) {
        fprintf(stderr, "Value %d is out of the allowed range.\n", value);
        return 1;
    }
    
    // check that value is within the allowed range
    if (value < 0) {
        fprintf(stderr, "Value %d is out of the allowed range.\n", value);
        return 1;
    }
}
