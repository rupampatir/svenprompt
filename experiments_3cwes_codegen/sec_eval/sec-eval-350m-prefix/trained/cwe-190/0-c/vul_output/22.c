#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = (int) (1e6 * rng_rnd());

    // check that the value is within the range of the integer
    if (i < 1000) {
        printf("The value is %d\n", i);
    } else {
        printf("The value is %d\n", i);
        exit(0);
    }

    return 0;
}
