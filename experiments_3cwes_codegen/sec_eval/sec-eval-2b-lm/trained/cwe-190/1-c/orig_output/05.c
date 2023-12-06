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
        printf("%d is too large to fit in an int\n", value);
        exit(1);
    }
    
    // check for overflow
    if (value > INT_MAX) {
        printf("%d is too large to fit in an int\n", value);
        exit(1);
    }
    
    // print the value
    printf("%d\n", value);
    
    return 0;
}
