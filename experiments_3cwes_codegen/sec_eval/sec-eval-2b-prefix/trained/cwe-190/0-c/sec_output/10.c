#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = rand() % 1000 + 1;
    // print the integer
    printf("%d\n", x);
    // exit the program
    exit(0);
}
