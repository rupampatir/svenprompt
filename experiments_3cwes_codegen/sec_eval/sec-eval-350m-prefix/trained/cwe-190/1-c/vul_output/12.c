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

    // check that the value is within the range of 0 to 100000000
    if (value > 100000000 || value < 0) {
        fprintf(stderr, "Error: value is out of range\n");
        exit(EXIT_FAILURE);
    }

    // return the value
    printf("value: %d\n", value);

    return EXIT_SUCCESS;
}
