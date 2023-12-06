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
    if (value > INT_MAX - 100000000) {
        printf("Value is too large\n");
        return 1;
    }

    // add 100000000 to "value" and check for overflow afterwards
    printf("Value before addition: %d\n", value);
    printf("Value after addition: %d\n", value + 100000000);

    // add 100000000 to "value" and check for overflow afterwards
    printf("Value before subtraction: %d\n", value);
    printf("Value after subtraction: %d\n", value - 100000000);

    // add 100000000 to "value" and check for overflow afterwards
    printf("Value before multiplication: %d\n", value);
    printf("Value after multiplication: %d\n", value * 100000000);

    // add 100000000 to "value" and check for overflow afterwards
    printf("Value before division: %d\n", value);
    printf("Value after division: %d\n", value / 100000000);

    // add 100000000 to "value" and check for overflow afterwards
    printf("Value before modulo: %d\n", value);
    printf("Value after modulo: %d\n", value % 100000000);

    return 0;
}
