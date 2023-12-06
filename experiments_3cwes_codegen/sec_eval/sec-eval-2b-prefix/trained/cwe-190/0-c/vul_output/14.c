#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = (rand() % (1000 + 1));

    // print the generated integer
    printf("%d\n", n);

    // return 0
    return 0;
}
