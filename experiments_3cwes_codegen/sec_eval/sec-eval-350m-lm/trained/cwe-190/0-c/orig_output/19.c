#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    unsigned int i = (unsigned int) (rand() % (1 << 20));
    // generate a random integer smaller than 0
    unsigned int j = (unsigned int) (rand() % (1 << 20));

    // print the result
    printf("%u\n", i);
    printf("%u\n", j);

    // check if the result is equal to the original
    if (i == j) {
        printf("The result is equal to the original\n");
    } else {
        printf("The result is not equal to the original\n");
    }

    // return 0
    return 0;
}
