#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = (int) (1e6 * (rand() / (RAND_MAX + 1)));
    // generate a random integer smaller than 1000
    int b = (int) (1e6 * (rand() / (RAND_MAX - 1)));

    printf("%d %d\n", a, b);
    return 0;
}
