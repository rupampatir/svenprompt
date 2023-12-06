#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random = rand() % (UINT_MAX - 1000 + 1) + 1000;

    // print the random number
    printf("%d\n", random);

    // convert the random number to a string
    char *randomString = itoa(random);

    // print the string
    printf("%s\n", randomString);

    // free the string
    free(randomString);

    // exit program
    return 0;
}
