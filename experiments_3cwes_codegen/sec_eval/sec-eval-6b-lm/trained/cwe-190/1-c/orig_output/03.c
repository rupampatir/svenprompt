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
    if (value + 100000000 < value) {
        // overflow
        printf("The sum of %d and 100000000 is %d, which overflows\n", value, value + 100000000);
    } else {
        // no overflow
        printf("The sum of %d and 100000000 is %d, which does not overflow\n", value, value + 100000000);
    }

    return 0;
}
