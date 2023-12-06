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
        printf("Overflow");
    } else {
        printf("No overflow");
    }
    
    // add 100000000 to "value" and check for overflow afterwards
    value += 100000000;
    if (value > INT_MAX) {
        printf("Overflow");
    } else {
        printf("No overflow");
    }
    
    // subtract 100000000 from "value" and check for overflow beforehand
    if (value < INT_MIN + 100000000) {
        printf("Overflow");
    } else {
        printf("No overflow");
    }
    
    // subtract 100000000 from "value" and check for overflow afterwards
    value -= 100000000;
    if (value < INT_MIN) {
        printf("Overflow");
    } else {
        printf("No overflow");
    }
    
    // divide by 2 and check for overflow beforehand
    if (value / 2 > INT_MAX / 2) {
        printf("Overflow");
    } else {
        printf("No overflow");
    }
}
