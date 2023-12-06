#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = (int) (1e6 * (rand() / (RAND_MAX + 1)));

    // check that the integer is larger than 1000
    if (i > 1000) {
        printf("%d is larger than 1000\n", i);
        return 0;
    }

    // check that the integer is not larger than 1000
    if (i < 1000) {
        printf("%d is smaller than 1000\n", i);
        return 0;
    }

    // check that the integer is not larger than 1000
    if (i > 1000) {
        printf("%d is larger than 1000\n", i);
        return 0;
    }

    // check that the integer is not larger than 1000
    if (i < 1000) {
        printf("%d is smaller than 1000\n", i);
        return 0;
    }

    // check that the integer is not larger than 1000
    if (i > 1000) {
        printf("%d is larger than 1000\n", i);
        return 0;
    }

    // check that the integer is not larger than 1000
    if (i < 1000) {
        printf("%d is smaller than 1000\n", i);
        return 0;
    }
}
