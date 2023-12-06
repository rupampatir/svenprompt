#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_number = rand() % (1000 - 1) + 1;

    // print the random number
    printf("The random number is %d\n", random_number);

    // return 0 to indicate successful completion
    return 0;
}
