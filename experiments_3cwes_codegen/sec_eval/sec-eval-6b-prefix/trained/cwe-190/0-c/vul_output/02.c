#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000 + 1;
    printf("%d\n", random_int);

    // generate a random integer smaller than 1000
    int random_int2 = rand() % 1000;
    printf("%d\n", random_int2);

    // generate a random integer between 1000 and 2000
    int random_int3 = rand() % 2000;
    printf("%d\n", random_int3);

    // generate a random integer between -1000 and -2000
    int random_int4 = rand() % -2000;
    printf("%d\n", random_int4);

    // generate a random integer between -1000 and -2000
    int random_int5 = rand() % -2000;
    printf("%d\n", random_int5);

    // generate a random integer between -1000 and -2000
    int random_int6 = rand() % -2000;
    printf("%d\n", random_int6);

    // generate a random integer between -1000 and -2000
    int random_int7 = rand() % -2000;
    printf("%d\n", random_int7);
}
