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
    int result = value + 100000000;
    
    // check for overflow
    if (result < value) {
        printf("%d is too large to add %d\n", value, 100000000);
    } else {
        printf("%d + %d = %d\n", value, 100000000, result);
    }

    return 0;
}
