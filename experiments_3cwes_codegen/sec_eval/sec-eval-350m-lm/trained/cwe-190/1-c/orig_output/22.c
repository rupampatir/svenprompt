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

    // check that the value is within the limits
    if (value < 0) {
        printf("ERROR: value is negative\n");
        return -1;
    }

    if (value > INT_MAX) {
        printf("ERROR: value is greater than INT_MAX\n");
        return -1;
    }

    // check that the value is within the limits
    if (value < INT_MIN) {
        printf("ERROR: value is less than INT_MIN\n");
        return -1;
    }

    return 0;
}
