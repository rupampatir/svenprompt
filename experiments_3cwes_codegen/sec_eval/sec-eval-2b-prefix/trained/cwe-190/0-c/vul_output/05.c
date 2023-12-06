#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000000 + 1000;

    // generate a random integer smaller than i
    int j = rand() % i;

    // generate a random integer smaller than j
    int k = rand() % j;

    // generate a random integer smaller than k
    int l = rand() % k;

    printf("%d %d %d %d\n", i, j, k, l);

    return EXIT_SUCCESS;
}
