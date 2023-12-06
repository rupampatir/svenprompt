#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int randomInt = rand() % 1000;

    // print the random integer
    printf("%d\n", randomInt);

    // return 0 if the random integer is larger than 1000
    return randomInt > 1000;
}
