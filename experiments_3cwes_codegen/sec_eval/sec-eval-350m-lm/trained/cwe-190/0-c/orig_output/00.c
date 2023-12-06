#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int r = rand();
    // generate a random integer smaller than 1000
    int s = rand();

    // generate a random integer between 0 and 1000
    int n = s + r;

    // check if the result is within the range
    if (n <= 1000) {
        printf("%d\n", n);
    } else {
        printf("%d is out of range\n", n);
    }

    return 0;
}
