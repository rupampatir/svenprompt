#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    unsigned int r = (unsigned int) (rand() / (float) RAND_MAX);

    // generate a random integer smaller than 1000
    unsigned int s = (unsigned int) (rand() / (float) RAND_MAX);

    // check that the random integer is larger than 1000
    if (r > 1000) {
        printf("%d is larger than 1000\n", r);
        return EXIT_FAILURE;
    }

    // check that the random integer is smaller than 1000
    if (s < 1000) {
        printf("%d is smaller than 1000\n", s);
        return EXIT_FAILURE;
    }

    // check that the random integer is equal to the original
    if (r!= s) {
        printf("%d is not equal to %d\n", r, s);
        return EXIT_FAILURE;
    }

    // check that the random integer is equal to the original
    if (r == s) {
        printf("%d is equal to %d\n", r, s);
        return EXIT_FAILURE;
    }
}
