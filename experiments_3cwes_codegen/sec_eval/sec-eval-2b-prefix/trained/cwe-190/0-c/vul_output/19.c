#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000;

    // generate a random integer smaller than 100000
    int j = rand() % 100000;

    // generate a random integer smaller than 10000000
    int k = rand() % 10000000;

    printf("%d %d %d\n", i, j, k);

    return EXIT_SUCCESS;
}
