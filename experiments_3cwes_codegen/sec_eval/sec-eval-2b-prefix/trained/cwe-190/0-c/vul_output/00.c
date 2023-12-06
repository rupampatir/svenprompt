#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = rand() % 1000000 + 1000;

    // generate a random integer smaller than 1000000
    int b = rand() % 1000000;

    // generate a random integer smaller than 1000000
    int c = rand() % 1000000;

    // generate a random integer smaller than 1000000
    int d = rand() % 1000000;

    // generate a random integer smaller than 1000000
    int e = rand() % 1000000;

    // generate a random integer smaller than 1000000
    int f = rand() % 1000000;

    printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);

    return 0;
}
