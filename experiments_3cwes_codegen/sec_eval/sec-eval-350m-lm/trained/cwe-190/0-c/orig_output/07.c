#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    unsigned int r = (unsigned int) (rand() % (INT_MAX + 1));

    // generate a random integer smaller than 0
    unsigned int s = (unsigned int) (rand() % (INT_MIN - 1));

    // print the result
    printf("%u\n", r);
    printf("%u\n", s);

    // return 0
    return 0;
}
