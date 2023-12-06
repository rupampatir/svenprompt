#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int r = rand();
    // generate a random integer smaller than 1000
    int c = rand();
    // generate a random integer between 0 and 1000
    int i = r % 1000 + 1;
    // generate a random integer between 0 and c
    int j = c % 1000 + 1;
    // generate a random integer between 0 and i
    int k = i + j + 1;
    // generate a random integer between 0 and k
    int l = k + 1;

    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%d\n", l);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%d\n", l);

    return 0;
}
