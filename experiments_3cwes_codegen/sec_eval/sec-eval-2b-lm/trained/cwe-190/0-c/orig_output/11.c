#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    while (n < INT_MAX) {
        n = (rand() % (INT_MAX - n + 1)) + n;
    }
    printf("%d\n", n);
    return 0;
}
