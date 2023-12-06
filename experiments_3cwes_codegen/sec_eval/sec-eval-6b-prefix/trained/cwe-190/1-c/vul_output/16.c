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
    if (value + 100000000 < value) {
        printf("value + 100000000 overflowed\n");
    } else {
        printf("value + 100000000 = %d\n", value + 100000000);
    }

    // subtract 100000000 from "value" and check for underflow beforehand
    if (value - 100000000 > value) {
        printf("value - 100000000 underflowed\n");
    } else {
        printf("value - 100000000 = %d\n", value - 100000000);
    }

    // multiply "value" by 2 and check for overflow beforehand
    if (value * 2 < value) {
        printf("value * 2 overflowed\n");
    } else {
        printf("value * 2 = %d\n", value * 2);
    }

    // divide "value" by 2 and check for underflow beforehand
    if (value / 2 > value) {
        printf("value / 2 underflowed\n");
    } else {
        printf("value / 2 = %d\n", value / 2);
    }
}
