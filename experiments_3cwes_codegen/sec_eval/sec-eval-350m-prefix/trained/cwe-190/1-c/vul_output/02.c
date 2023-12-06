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

    // check that "value" is within the range of 0 to 100000000
    if (value < 0 || value > 100000000) {
        printf("Value out of range!\n");
        return 1;
    }

    // check that "value" is within the range of 0 to 100
    if (value > 0 && value <= 100) {
        printf("Value is within range!\n");
    }

    return 0;
}
