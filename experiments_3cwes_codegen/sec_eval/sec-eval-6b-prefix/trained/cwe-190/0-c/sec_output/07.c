#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    if (argc == 2) {
        n = atoi(argv[1]);
    }

    // generate a random integer between 0 and n
    int r = rand() % n;

    // print the random number
    printf("%d\n", r);

    return 0;
}
