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
        fprintf(stderr, "Value overflow\n");
        exit(EXIT_FAILURE);
    }
    
    // check that the value is within the valid range
    if (value < 0) {
        fprintf(stderr, "Value out of range\n");
        exit(EXIT_FAILURE);
    }
    
    // check that the value is not greater than the max value
    if (value > INT_MAX) {
        fprintf(stderr, "Value out of range\n");
        exit(EXIT_FAILURE);
    }
    
    // check that the value is not less than 0
    if (value < 0) {
        fprintf(stderr, "Value out of range\n");
        exit(EXIT_FAILURE);
    }
    
    // check that the value is not greater than the max value
    if (value > INT_MAX) {
        fprintf(stderr, "Value out of range\n");
        exit(EXIT_FAILURE);
    }
}
