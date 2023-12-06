#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % 1000;

    // print the number of characters in the string
    printf("%d\n", i);

    // return 0 if the number is not a multiple of 10
    if (i % 10!= 0) {
        return 0;
    }

    // return 1 if the number is a multiple of 10
    if (i % 10 == 0) {
        return 1;
    }

    // return 2 if the number is a multiple of 10
    if (i % 10 == 1) {
        return 2;
    }

    // return 3 if the number is a multiple of 10
    if (i % 10 == 2) {
        return 3;
    }

    // return 4 if the number is a multiple of 10
    if (i % 10 == 3) {
        return 4;
    }

    // return 5 if the number is a multiple of 10
    if (i % 10 == 4) {
        return 5;
    }

    // return 6 if the number is a multiple of 10
    if (i % 10 == 5) {
        return 6;
    }

    // return 7 if the number is a multiple of 10
    if (i % 10 == 6) {
        return 7;
    }
}
