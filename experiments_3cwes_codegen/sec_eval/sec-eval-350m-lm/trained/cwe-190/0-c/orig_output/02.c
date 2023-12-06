#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000 + 1;

    // get the number of digits in the integer
    int digits = 0;
    while (i > 0) {
        i /= 10;
        digits++;
    }

    // print the number of digits
    printf("%d\n", digits);

    return 0;
}
