#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    unsigned int r = (unsigned int) (1e6 * (1U << 20));

    // generate a random integer smaller than 1
    unsigned int s = (unsigned int) (1U << 20);

    // generate a random integer between 1 and 2^32-1
    unsigned int n = r + s + 1;

    // generate a random integer between 1 and 2^32
    unsigned int m = r + s;

    // generate a random integer between 1 and 2^32-1
    unsigned int k = r + s;

    // generate a random integer between 1 and 2^32-1
    unsigned int n2 = n + k;

    // generate a random integer between 1 and 2^32-1
    unsigned int m2 = m + k;

    // generate a random integer between 1 and 2^32-1
    unsigned int k2 = k + 1;

    // generate a random integer between 1 and 2^32-1
    unsigned int n3 = n2 + k2;

    // generate a random integer between 1 and 2^32-1
    unsigned int m3 = m2 + k2;

    // generate a random integer between 1 and 2^32-1
    unsigned int k3 = k2 + 1;
}
