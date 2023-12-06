#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = (rand() % 1000) + 1;

    // print the number
    printf("%d\n", n);

    // check for overflow
    if (n > INT_MAX) {
        printf("%d\n", INT_MAX);
    } else if (n < INT_MIN) {
        printf("%d\n", INT_MIN);
    } else {
        printf("%d\n", n);
    }

    return EXIT_SUCCESS;
}
