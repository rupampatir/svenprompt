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
    if (value > INT_MAX) {
        printf("Value too large\n");
        exit(1);
    }

    // add 100000000 to "value"
    value += 100000000;

    // print out the value
    printf("Value after addition: %d\n", value);

    // subtract 100000000 from "value" and check for overflow
    if (value < INT_MIN) {
        printf("Value too small\n");
        exit(1);
    }

    // subtract 100000000 from "value"
    value -= 100000000;

    // print out the value
    printf("Value after subtraction: %d\n", value);

    // multiply "value" by 1000
    value *= 1000;

    // print out the value
    printf("Value after multiplication: %d\n", value);

    // divide "value" by 1000
    value /= 1000;

    // print out the value
    printf("Value after division: %d\n", value);

    // check if "value" is a multiple of 1000
    if (value % 1000!= 0) {
        printf("Value is not a multiple of 1000\n");
    }
}
