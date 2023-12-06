#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000 + rand() % (INT_MAX - 1000);

    printf("%d\n", n);

    return EXIT_SUCCESS;
}
