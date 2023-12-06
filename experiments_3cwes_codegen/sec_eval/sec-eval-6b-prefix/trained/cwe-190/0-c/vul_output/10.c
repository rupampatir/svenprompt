#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_number = rand() % 1000;

    // print the random number
    printf("The random number is %d\n", random_number);

    // generate a random integer larger than -1000
    random_number = rand() % -1000;

    // print the random number
    printf("The random number is %d\n", random_number);

    // generate a random integer larger than INT_MAX
    random_number = rand() % INT_MAX;

    // print the random number
    printf("The random number is %d\n", random_number);

    // generate a random integer larger than INT_MIN
    random_number = rand() % INT_MIN;

    // print the random number
    printf("The random number is %d\n", random_number);

    // generate a random integer larger than INT_MAX
    random_number = rand() % INT_MAX;

    // print the random number
    printf("The random number is %d\n", random_number);

    // generate a random integer larger than INT_MIN
    random_number = rand() % INT_MIN;

    // print the random number
    printf("The random number is %d\n", random_number);
}
