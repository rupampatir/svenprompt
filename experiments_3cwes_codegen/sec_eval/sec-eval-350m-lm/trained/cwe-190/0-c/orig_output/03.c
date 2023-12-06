#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000;
    // generate a random integer smaller than 1
    int j = rand() % (i + 1);
    // generate a random integer larger than 1
    int k = rand() % (i + 1);
    // generate a random integer smaller than 1
    int l = rand() % (j + 1);

    // print out the result
    printf("%d %d %d %d\n", i, j, k, l);

    return 0;
}
