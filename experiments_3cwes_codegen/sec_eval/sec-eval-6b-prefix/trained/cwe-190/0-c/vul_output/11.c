#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int x = rand() % 1000;

    // print the random integer
    printf("%d\n", x);

    // generate a random integer larger than 0 and smaller than 1000
    int y = rand() % 1000;

    // print the random integer
    printf("%d\n", y);

    // generate a random integer larger than -1000 and smaller than 0
    int z = rand() % 1000;

    // print the random integer
    printf("%d\n", z);

    // generate a random integer larger than -1000 and smaller than -1000
    int w = rand() % 1000;

    // print the random integer
    printf("%d\n", w);

    // generate a random integer larger than -1000 and smaller than -1000
    int t = rand() % 1000;

    // print the random integer
    printf("%d\n", t);

    // generate a random integer larger than -1000 and smaller than -1000
    int u = rand() % 1000;

    // print the random integer
    printf("%d\n", u);

    // generate a random integer larger than -1000 and smaller than -1000
    int v = rand() % 1000;

    // print the random integer
    printf("%d\n", v);
}
