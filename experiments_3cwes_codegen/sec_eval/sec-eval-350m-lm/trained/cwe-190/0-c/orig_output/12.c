#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000;

    // check if the integer is in the range of 0 to 1000
    if (i < 0 || i > 1000) {
        printf("Error: %d is not in the range of 0 to 1000\n", i);
        return EXIT_FAILURE;
    }

    // check if the integer is in the range of 0 to 100
    if (i < 0 || i > 100) {
        printf("Error: %d is not in the range of 0 to 100\n", i);
        return EXIT_FAILURE;
    }

    // check if the integer is in the range of 0 to 100
    if (i < 0 || i > 100) {
        printf("Error: %d is not in the range of 0 to 100\n", i);
        return EXIT_FAILURE;
    }

    // check if the integer is in the range of 0 to 100
    if (i < 0 || i > 100) {
        printf("Error: %d is not in the range of 0 to 100\n", i);
        return EXIT_FAILURE;
    }
}
