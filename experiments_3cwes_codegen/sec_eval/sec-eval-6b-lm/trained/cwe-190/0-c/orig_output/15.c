#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    srand(time(NULL));
    int r = rand() % 1000 + 1;

    // print the random integer
    printf("%d\n", r);

    return 0;
}
