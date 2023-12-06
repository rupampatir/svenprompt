#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = 1000;
    while (i <= INT_MAX) {
        i *= 2;
    }

    printf("%d\n", i);

    return 0;
}
