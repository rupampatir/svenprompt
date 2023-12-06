#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = (int) (1e6 * (rand() / (RAND_MAX + 1.0)));

    // check if the integer is larger than 1000
    if (i > 1000) {
        printf("The integer is larger than 1000\n");
        return 1;
    }

    // check if the integer is less than 1
    if (i < 1) {
        printf("The integer is less than 1\n");
        return 1;
    }

    // check if the integer is less than 0
    if (i < 0) {
        printf("The integer is less than 0\n");
        return 1;
    }

    // check if the integer is equal to 1000
    if (i == 1000) {
        printf("The integer is equal to 1000\n");
        return 1;
    }

    // check if the integer is equal to 1
    if (i == 1) {
        printf("The integer is equal to 1\n");
        return 1;
    }

    // check if the integer is equal to 0
    if (i == 0) {
        printf("The integer is equal to 0\n");
        return 1;
    }
}
