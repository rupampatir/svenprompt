#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand();

    // generate a random integer smaller than 1000
    int j = rand();

    // print the random integer
    printf("%d\n", i);
    printf("%d\n", j);

    // print the random integer
    printf("%d\n", j);

    return 0;
}
