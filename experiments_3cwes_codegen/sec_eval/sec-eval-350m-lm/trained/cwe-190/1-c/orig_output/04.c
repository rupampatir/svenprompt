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
        printf("The value is too large.\n");
        return 1;
    } else if (value < INT_MIN) {
        printf("The value is too small.\n");
        return 1;
    }

    // add 100000000 to "value" and check for overflow thereafter
    value += 100000000;
    if (value > INT_MAX) {
        printf("The value is too large.\n");
        return 1;
    } else if (value < INT_MIN) {
        printf("The value is too small.\n");
        return 1;
    }

    // check that the value is within the range of ints
    if (value < INT_MIN) {
        printf("The value is too small.\n");
        return 1;
    } else if (value > INT_MAX) {
        printf("The value is too large.\n");
        return 1;
    }
}
