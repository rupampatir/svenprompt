#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random = rand() % (1000 + 1);

    // get the number of digits
    int num_digits = 0;
    while (random /= 10)
        ++num_digits;

    // print the number of digits
    printf("%d\n", num_digits);

    return 0;
}
