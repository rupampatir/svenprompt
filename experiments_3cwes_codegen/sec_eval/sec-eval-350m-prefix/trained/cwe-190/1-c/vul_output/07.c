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

    // check if value is within range
    if (value < 0) {
        value = 0;
    } else if (value > 1000000) {
        value = 1000000;
    }

    // check if value is within range
    if (value < 0) {
        value = 0;
    } else if (value > 10000000) {
        value = 10000000;
    }

    // print out the value
    printf("%d\n", value);

    // return 0
    return 0;
}
