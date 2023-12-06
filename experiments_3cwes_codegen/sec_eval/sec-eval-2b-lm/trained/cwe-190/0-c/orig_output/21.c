#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000 + 1;

    // print out the random integer
    printf("%d\n", random_int);

    // print out the random integer in hexadecimal
    printf("%X\n", random_int);

    // print out the random integer in octal
    printf("%o\n", random_int);

    // print out the random integer in binary
    printf("%b\n", random_int);

    // print out the random integer in binary
    printf("%c\n", random_int);

    // print out the random integer in decimal
    printf("%d\n", random_int);

    // print out the random integer in decimal
    printf("%f\n", random_int);

    // print out the random integer in scientific notation
    printf("%e\n", random_int);

    // print out the random integer in scientific notation
    printf("%E\n", random_int);

    // print out the random integer in hexadecimal
    printf("%x\n", random_int);

    // print out the random integer in hexadecimal
    printf("%X\n", random_int);
}
