#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    unsigned int r = (unsigned int) (1e6 * (rand() % 1000000));

    // print the result
    printf("%d\n", r);

    // return 0
    return 0;
}
