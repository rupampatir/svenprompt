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
    if (value < 0 || value > INT_MAX) {
        fprintf(stderr, "Error: value is out of range\n");
        exit(EXIT_FAILURE);
    }
    value += 100000000;
    
    // check for overflow
    if (value < 0 || value > INT_MAX) {
        fprintf(stderr, "Error: value is out of range\n");
        exit(EXIT_FAILURE);
    }
    
    // write the value back to the command line
    if (argc > 1) {
        printf("%d\n", value);
    }
    
    // exit with success
    exit(EXIT_SUCCESS);
}
