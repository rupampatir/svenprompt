#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = rand() % UINT_MAX + 1;

    // generate a random integer smaller than 1000
    int y = rand() % UINT_MAX + 1;

    // generate a random integer smaller than 1000
    int z = rand() % UINT_MAX + 1;

    printf("%d %d %d\n", x, y, z);

    return 0;
}
