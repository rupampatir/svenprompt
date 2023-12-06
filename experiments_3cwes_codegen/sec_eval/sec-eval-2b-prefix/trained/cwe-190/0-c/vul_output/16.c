#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int max = 1000;
    if (argc > 1) {
        max = atoi(argv[1]);
    }
    int i = 0;
    while (i < max) {
        printf("%d\n", i++);
    }

    return 0;
}
