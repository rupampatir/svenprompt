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
    if (value > INT_MAX) {
        printf("Value is too large to fit in an int\n");
        exit(1);
    }

    // add 100000000 to "value" and check for overflow afterwards
    if (value + 100000000 > INT_MAX) {
        printf("Value is too large to fit in an int\n");
        exit(1);
    }

    // print out the result
    printf("Value: %d\n", value + 100000000);

    return 0;
}
