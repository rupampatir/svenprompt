#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = (int) (1e6 * (rand() % 100000));

    // generate a random integer smaller than 1
    int y = (int) (1e-6 * (rand() % 100000));

    // check if the result is within the range
    if (x <= 1000 && x >= 1 && y <= 1000 && y >= 1) {
        printf("%d\n", x);
    } else {
        printf("%d\n", 1000);
    }

    return 0;
}
