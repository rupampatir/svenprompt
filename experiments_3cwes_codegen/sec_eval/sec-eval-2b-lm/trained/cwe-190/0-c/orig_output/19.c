#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = (rand() % 1000) + 1;
    // generate a random integer smaller than 1000
    int y = (rand() % 1000) + 1;

    // print the result
    printf("%d + %d = %d\n", x, y, x + y);

    // exit with error code
    exit(1);
}
