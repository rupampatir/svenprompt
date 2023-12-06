#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000 + 1;

    // generate a random integer smaller than 1000
    int j = rand() % 1000 + 1;

    // generate a random integer larger than 1000
    int k = rand() % 1000 + 1;

    // generate a random integer smaller than 1000
    int l = rand() % 1000 + 1;

    // generate a random integer larger than 1000
    int m = rand() % 1000 + 1;

    // generate a random integer smaller than 1000
    int n = rand() % 1000 + 1;

    printf("%d %d %d %d %d %d\n", i, j, k, l, m, n);

    return 0;
}
