#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = rand() % 1000 + 1;

    // generate a random integer smaller than 1000
    int b = rand() % 1000 + 1;

    // generate a random integer smaller than 100000
    int c = rand() % 100000 + 1;

    // generate a random integer smaller than 100000
    int d = rand() % 100000 + 1;

    printf("%d %d %d %d\n", a, b, c, d);

    // generate a random integer larger than 1000
    int e = rand() % 1000 + 1;

    // generate a random integer smaller than 1000
    int f = rand() % 1000 + 1;

    // generate a random integer smaller than 100000
    int g = rand() % 100000 + 1;

    // generate a random integer smaller than 100000
    int h = rand() % 100000 + 1;

    printf("%d %d %d %d\n", e, f, g, h);

    // generate a random integer larger than 1000
    int i = rand() % 1000 + 1;

    // generate a random integer smaller than 1000
    int j = rand() % 1000 + 1;

    // generate a random integer smaller than 100000
    int k = rand() % 100000 + 1;
}
