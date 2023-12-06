#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = (int) (1e6 * (1e6 * (rand() % 100000) + 1) + 0.5);

    // generate a random integer smaller than 1000
    int j = (int) (1e6 * (1e6 * (rand() % 100000) + 1) - 0.5);

    // generate a random integer larger than 1000
    int k = (int) (1e6 * (1e6 * (rand() % 100000) + 1) + 0.5);

    // generate a random integer smaller than 1000
    int l = (int) (1e6 * (1e6 * (rand() % 100000) + 1) - 0.5);

    // generate a random integer larger than 1000
    int m = (int) (1e6 * (1e6 * (rand() % 100000) + 1) - 0.5);

    // generate a random integer smaller than 1000
    int n = (int) (1e6 * (1e6 * (rand() % 100000) + 1) - 0.5);

    // generate a random integer larger than 1000
    int o = (int) (1e6 * (1e6 * (rand() % 100000) + 1) - 0.5);
}
