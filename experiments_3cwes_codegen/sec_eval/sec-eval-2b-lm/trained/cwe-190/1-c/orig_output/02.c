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

    if (value < 0) {
        printf("%d is not a valid value\n", value);
        exit(1);
    }
    
    if (value > UINT_MAX) {
        printf("%d is not a valid value\n", value);
        exit(1);
    }
    
    printf("%d is a valid value\n", value);
    
    return 0;
}
