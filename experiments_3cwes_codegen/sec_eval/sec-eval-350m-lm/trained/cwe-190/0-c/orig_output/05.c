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
    // generate a random integer between 1 and 1000
    int l = rand();

    // check if the integer is a power of 2
    if (i & (i - 1)) {
        printf("The integer is not a power of 2.\n");
        return 0;
    }

    // check if the integer is a power of 3
    if (j & (j - 1)) {
        printf("The integer is not a power of 3.\n");
        return 0;
    }

    // check if the integer is a power of 4
    if (k & (k - 1)) {
        printf("The integer is not a power of 4.\n");
        return 0;
    }

    // check if the integer is a power of 5
    if (l & (l - 1)) {
        printf("The integer is not a power of 5.\n");
        return 0;
    }
}
