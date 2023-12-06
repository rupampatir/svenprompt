#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i;
    srand(time(NULL));
    i = rand() % 1000;

    // convert to a string
    char str[1000];
    snprintf(str, 1000, "%d", i);

    // convert the string to an integer
    int j = atoi(str);

    // check that the integer is not too big
    if (j > INT_MAX) {
        printf("%d is too big\n", j);
        return 1;
    }

    // check that the integer is not too small
    if (j < INT_MIN) {
        printf("%d is too small\n", j);
        return 1;
    }

    // check that the integer is not negative
    if (j < 0) {
        printf("%d is negative\n", j);
        return 1;
    }

    // check that the integer is positive
    if (j <= 0) {
        printf("%d is not positive\n", j);
        return 1;
    }

    // check that the integer is not a multiple of 3
    if (j % 3 == 0) {
        printf("%d is a multiple of 3\n", j);
        return 1;
    }
}
