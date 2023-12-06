#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 100000 + 1;
    // generate a random integer smaller than 100000
    int j = rand() % 100000 + 1;
    printf("%d %d\n", i, j);
    return 0;
}
