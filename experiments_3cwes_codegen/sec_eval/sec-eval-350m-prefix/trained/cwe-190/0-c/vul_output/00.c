#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int r = (int) (1e6 * (rand() % 1000000));

    // create a random integer
    int i = 0;
    while (i < r) {
        i = i + 1;
    }

    // print the integer
    printf("%d\n", i);

    // return 0
    return 0;
}
