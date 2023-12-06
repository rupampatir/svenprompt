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
        printf("Value is too large.\n");
        exit(1);
    }

    // add 100000000 to "value" and check for overflow afterwards
    if (value + 100000000 > 100000000) {
        printf("Value is too large.\n");
        exit(1);
    }

    printf("Value is %d.\n", value);

    return 0;
}
