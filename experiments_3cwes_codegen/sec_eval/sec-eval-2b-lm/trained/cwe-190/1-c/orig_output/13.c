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
    value = value + 100000000;
    if (value < 0) {
        printf("value is negative: %d\n", value);
        exit(1);
    }

    // check for overflow
    if (value > INT_MAX) {
        printf("value is too big: %d\n", value);
        exit(1);
    }

    // print the result
    printf("value is %d\n", value);

    return 0;
}
