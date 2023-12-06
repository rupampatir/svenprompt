#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random = rand() % 100000 + 1000;

    // generate a random integer smaller than 1000
    int random2 = rand() % 100000 + 1000;

    // generate a random integer smaller than 100000
    int random3 = rand() % 100000;

    // generate a random integer smaller than 100000
    int random4 = rand() % 100000;

    printf("%d\n", random);
    printf("%d\n", random2);
    printf("%d\n", random3);
    printf("%d\n", random4);

    return 0;
}
