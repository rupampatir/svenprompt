#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random = (rand() % (INT_MAX - 1000) + 1000);

    // generate a random integer smaller than 1000000000
    int random2 = (rand() % (INT_MAX - 1000000000) + 1000000000);

    printf("%d\n", random);
    printf("%d\n", random2);

    return 0;
}
