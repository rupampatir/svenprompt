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
    int result = value + 100000000;
    if (result < 0) {
        printf("%d + 100000000 does not fit in an int\n", value);
    } else {
        printf("%d + 100000000 = %d\n", value, result);
    }

    // subtract 100000000 from "value" and check for overflow beforehand
    result = value - 100000000;
    if (result > INT_MAX) {
        printf("%d - 100000000 does not fit in an int\n", value);
    } else {
        printf("%d - 100000000 = %d\n", value, result);
    }

    // add 1 to "value" and check for overflow afterwards
    result = value + 1;
    if (result < 0) {
        printf("%d + 1 does not fit in an int\n", value);
    } else {
        printf("%d + 1 = %d\n", value, result);
    }
}
