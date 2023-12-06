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

    // check that "value" is in the range of 0 to 2^31-1
    if (value < 0) {
        fprintf(stderr, "value must be in the range 0 to 2^31-1");
        exit(1);
    }
    if (value > 2147483647) {
        fprintf(stderr, "value must be in the range 0 to 2^31-1");
        exit(1);
    }

    // add 1000000 to "value" and check for overflow beforehand
    value += 1000000;

    // check that "value" is in the range 0 to 2^31-1
    if (value < 0) {
        fprintf(stderr, "value must be in the range 0 to 2^31-1");
        exit(1);
    }
    if (value > 2147483647) {
        fprintf(stderr, "value must be in the range 0 to 2^31-1");
        exit(1);
    }
}
