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
    if (value > INT_MAX) {
        fprintf(stderr, "value overflow\n");
        return 1;
    }
    
    // add 1000000 to "value" and check for overflow beforehand
    value += 1000000;
    if (value > INT_MAX) {
        fprintf(stderr, "value overflow\n");
        return 1;
    }
    
    // check if the value is within the range
    if (value < 0) {
        fprintf(stderr, "value overflow\n");
        return 1;
    }
    
    // return 0 if the value is within the range
    if (value > 0) {
        fprintf(stderr, "value overflow\n");
        return 1;
    }
    
    // return 1 if the value is within the range
    if (value < 0) {
        fprintf(stderr, "value overflow\n");
        return 1;
    }
    
    return 0;
}
