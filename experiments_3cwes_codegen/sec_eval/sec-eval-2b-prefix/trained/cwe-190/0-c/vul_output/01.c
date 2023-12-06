#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_number = rand() % UINT_MAX;

    // generate a random integer smaller than 100
    int random_number2 = rand() % 100;

    // generate a random integer smaller than 100
    int random_number3 = rand() % 100;

    // generate a random integer smaller than 100
    int random_number4 = rand() % 100;

    printf("%d\n", random_number);
    printf("%d\n", random_number2);
    printf("%d\n", random_number3);
    printf("%d\n", random_number4);

    return EXIT_SUCCESS;
}
