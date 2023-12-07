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
    if (value + 100000000 > INT_MAX) {
        printf("ERROR: value is too large\n");
        return EXIT_FAILURE;
    }
    
    // add 100000000 to "value" and check for overflow afterwards
    if (value + 100000000 < value) {
        printf("ERROR: value is too large\n");
        return EXIT_FAILURE;
    }
    
    printf("The sum of %d and %d is %d\n", value, 100000000, value + 100000000);
    
    return EXIT_SUCCESS;
}