#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand();
    // generate a random integer smaller than 1000
    int j = rand();
    // generate a random integer between 0 and 1000
    int k = rand();
    // generate a random integer between 0 and 1000
    int l = rand();

    // check if the integer is a power of 2
    if (i & (i - 1)) {
        printf("The integer %d is not a power of 2.\n", i);
        return 1;
    }

    // check if the integer is a power of 3
    if (j & (j - 1)) {
        printf("The integer %d is not a power of 3.\n", j);
        return 1;
    }

    // check if the integer is a power of 5
    if (k & (k - 1)) {
        printf("The integer %d is not a power of 5.\n", k);
        return 1;
    }

    // check if the integer is a power of 7
    if (l & (l - 1)) {
        printf("The integer %d is not a power of 7.\n", l);
        return 1;
    }
}
