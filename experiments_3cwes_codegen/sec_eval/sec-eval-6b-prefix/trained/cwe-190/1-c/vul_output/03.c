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
        printf("Value too large!\n");
        return 1;
    }
    
    // add 100000000 to "value" and check for overflow afterwards
    value = value + 100000000;
    if (value < INT_MIN) {
        printf("Value too small!\n");
        return 1;
    }

    // print out the value
    printf("Value: %d\n", value);

    // return 0 to indicate success
    return 0;
}
