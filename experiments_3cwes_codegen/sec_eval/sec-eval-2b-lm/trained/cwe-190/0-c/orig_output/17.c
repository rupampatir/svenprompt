#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int max_int = 1000;
    int min_int = -1000;
    int random_int = rand() % (max_int - min_int) + min_int;

    // print the random integer
    printf("The random integer is %d\n", random_int);

    return EXIT_SUCCESS;
}
