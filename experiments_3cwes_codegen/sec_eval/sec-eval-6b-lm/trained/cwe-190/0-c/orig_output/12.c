#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    srand(time(NULL));
    n = rand() % n;

    // print the random number
    printf("%d\n", n);

    // return 0
    return 0;
}
