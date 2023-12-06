#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int num = rand() % 100000 + 1000;

    // print the number
    printf("%d\n", num);

    // print the number in hexadecimal
    printf("%X\n", num);

    // print the number in octal
    printf("%o\n", num);

    // print the number in binary
    printf("%b\n", num);

    // print the number in decimal
    printf("%d\n", num);

    // print the number in hexadecimal with a leading zero
    printf("%X\n", num);

    // print the number in octal with a leading zero
    printf("%o\n", num);

    // print the number in binary with a leading zero
    printf("%b\n", num);

    // print the number in decimal with a leading zero
    printf("%d\n", num);

    // print the number in hexadecimal with a leading zero
    printf("%X\n", num);

    // print the number in octal with a leading zero
    printf("%o\n", num);

    // print the number in binary with a leading zero
    printf("%b\n", num);
}
