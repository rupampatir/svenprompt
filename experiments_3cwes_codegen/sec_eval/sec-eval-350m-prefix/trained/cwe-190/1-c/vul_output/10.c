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
        printf("value is too large\n");
        return 1;
    }

    // check that value is within the range of an int
    if (value < INT_MIN) {
        printf("value is too small\n");
        return 1;
    }

    // check that value is less than or equal to the max value
    if (value > INT_MAX) {
        printf("value is too large\n");
        return 1;
    }

    // check that value is less than the max value
    if (value > INT_MAX) {
        printf("value is too large\n");
        return 1;
    }

    // check that value is less than the max value
    if (value <= INT_MAX) {
        printf("value is within the range\n");
    }

    return 0;
}
