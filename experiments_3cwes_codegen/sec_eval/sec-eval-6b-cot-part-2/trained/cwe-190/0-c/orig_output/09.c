
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_number;
    do {
        random_number = rand() % 1000;
    } while (random_number == 0);

    // print the random number
    printf("%d\n", random_number);

    return 0;
}
