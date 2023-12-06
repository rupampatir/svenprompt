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

    // check for overflow
    if (value > INT_MAX) {
        fprintf(stderr, "Value is too large\n");
        return 1;
    }

    // check for overflow
    if (value < 0) {
        fprintf(stderr, "Value is negative\n");
        return 1;
    }

    // print out the value
    fprintf(stdout, "%d", value);

    return 0;
}
