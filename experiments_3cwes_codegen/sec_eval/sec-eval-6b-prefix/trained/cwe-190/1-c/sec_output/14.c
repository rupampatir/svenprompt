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
    if (value > INT_MAX - 100000000) {
        printf("The value is too large to be represented by an int\n");
        return -1;
    }
    
    // add 100000000 to "value" and check for overflow afterwards
    if (value + 100000000 < value) {
        printf("The value is too large to be represented by an int\n");
        return -1;
    }

    // print out the value
    printf("%d\n", value + 100000000);

    // return 0 for success
    return 0;
}
