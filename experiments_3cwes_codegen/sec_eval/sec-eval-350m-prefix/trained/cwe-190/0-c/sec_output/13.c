#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand();
    // generate a random integer smaller than 1000
    int j = rand();
    // generate a random integer between 1 and 1000
    int k = rand();

    // print the result
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);

    // return 0
    return 0;
}
