#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 100;
    if (i < 10) {
        printf("%d\n", i);
    } else {
        printf("%d\n", i);
    }

    return 0;
}
