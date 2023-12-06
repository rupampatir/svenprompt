#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = rand() % 1000;
    // generate a random integer larger than 1000
    int m = rand() % 1000;

    printf("%d\n", n);
    printf("%d\n", m);
    return 0;
}
