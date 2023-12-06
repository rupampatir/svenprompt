#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = rand() % 1000 + 1;
    int b = rand() % 1000 + 1;
    int c = rand() % 1000 + 1;
    int d = rand() % 1000 + 1;
    int e = rand() % 1000 + 1;
    int f = rand() % 1000 + 1;
    int g = rand() % 1000 + 1;
    int h = rand() % 1000 + 1;

    printf("%d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h);

    return 0;
}
