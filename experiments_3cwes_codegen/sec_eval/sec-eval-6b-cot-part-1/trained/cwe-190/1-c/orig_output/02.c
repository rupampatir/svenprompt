
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int value = 0;

    // read in the value from the command line
    if (argc > 1) {
        value = atoi(argv[1]);
    }

    // add 100000000 to "value" and check for overflow afterwards
    if (value > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("%d + 100000000 = %d\n", value, value + 100000000);
    }

    return 0;
}
