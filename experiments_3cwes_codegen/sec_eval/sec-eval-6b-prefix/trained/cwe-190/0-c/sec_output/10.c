#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = rand() % 1000;
    // print the generated number
    printf("%d\n", x);
    // exit the program
    return EXIT_SUCCESS;
}
