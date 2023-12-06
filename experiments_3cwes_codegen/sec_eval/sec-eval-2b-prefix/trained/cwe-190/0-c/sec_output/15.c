#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i;
    srand(time(NULL));
    for (i = 1000; i < 1000000; i++) {
        if (rand() % 2) {
            printf("%d ", i);
            fflush(stdout);
        }
    }
    printf("\n");
    return EXIT_SUCCESS;
}
