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

    // if the value is too large, print an error
    if (value > INT_MAX) {
        fprintf(stderr, "value too large\n");
        exit(1);
    }

    // if the value is smaller than zero, print an error
    if (value < 0) {
        fprintf(stderr, "value too small\n");
        exit(1);
    }

    // print the value
    fprintf(stdout, "value = %d\n", value);

    // return 0
    return 0;
}
