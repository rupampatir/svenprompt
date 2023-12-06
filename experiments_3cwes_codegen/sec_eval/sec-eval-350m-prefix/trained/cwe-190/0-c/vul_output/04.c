#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int r = (int) (1e6 * (rand() % 1000000));
    printf("%d\n", r);

    // generate a random integer smaller than 1000
    int r2 = (int) (1e6 * (rand() % 1000000));
    printf("%d\n", r2);

    // generate a random integer between 1000 and 10000
    int r3 = (int) (1e6 * (rand() % 1000000));
    printf("%d\n", r3);

    // generate a random integer between 0 and 100
    int r4 = (int) (1e6 * (rand() % 100));
    printf("%d\n", r4);

    // generate a random integer between 0 and 100
    int r5 = (int) (1e6 * (rand() % 100));
    printf("%d\n", r5);

    // generate a random integer between 0 and 100
    int r6 = (int) (1e6 * (rand() % 100));
    printf("%d\n", r6);

    // generate a random integer between 0 and 100
    int r7 = (int) (1e6 * (rand() % 100));
    printf("%d\n", r7);
}
