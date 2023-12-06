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
        printf("The sum of %d and 100000000 overflows\n", value);
    } else {
        printf("The sum of %d and 100000000 is %d\n", value, result);
    }

    // if the value is less than INT_MAX, add 1 to it and check for overflow
    if (value < INT_MAX) {
        value++;
        result = value + 100000000;
        if (result < 0) {
            printf("The sum of %d and 100000000 overflows\n", value);
        } else {
            printf("The sum of %d and 100000000 is %d\n", value, result);
        }
    }

    // if the value is less than INT_MAX - 1, add 1 to it and check for overflow
    if (value < INT_MAX - 1) {
        value++;
        result = value + 100000000;
        if (result < 0) {
            printf("The sum of %d and 100000000 overflows\n", value);
        } else {
            printf("The sum of %d and 100000000 is %d\n", value, result);
        }
    }
}
