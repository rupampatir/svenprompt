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
        exit(1);
    }
    
    // print out the value
    printf("%d\n", value);

    // check that the value is within the allowed range
    if (value < 0) {
        fprintf(stderr, "value out of range\n");
        exit(1);
    }
    if (value > INT_MAX) {
        fprintf(stderr, "value out of range\n");
        exit(1);
    }

    // check that the value is within the allowed range
    if (value < 0) {
        fprintf(stderr, "value out of range\n");
        exit(1);
    }
    if (value > INT_MAX) {
        fprintf(stderr, "value out of range\n");
        exit(1);
    }
}
