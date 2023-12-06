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
        value = INT_MAX;
    }
    else if (value < INT_MIN) {
        value = INT_MIN;
    }
    
    // check for overflow
    if (value > INT_MAX) {
        printf("value too large\n");
        return EXIT_FAILURE;
    }
    else if (value < INT_MIN) {
        printf("value too small\n");
        return EXIT_FAILURE;
    }
    
    // write the value out to stdout
    printf("value = %d\n", value);
    
    return EXIT_SUCCESS;
}
