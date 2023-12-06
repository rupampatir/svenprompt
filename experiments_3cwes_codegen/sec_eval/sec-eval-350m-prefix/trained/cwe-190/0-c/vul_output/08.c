#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int r = rand();

    // generate a random integer smaller than 1000
    int n = r % 1000;

    // print the result
    printf("%d\n", n);

    // return 0
    return 0;
}
