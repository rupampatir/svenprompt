#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = (int) (1e6 * (1e6 + (rand() % 100)));

    // print the value of i
    printf("%d\n", i);

    // return 0
    return 0;
}
