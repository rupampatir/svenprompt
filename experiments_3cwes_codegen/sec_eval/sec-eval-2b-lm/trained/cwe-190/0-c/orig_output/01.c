#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = rand() % 1000 + 1;
    int b = rand() % 1000 + 1;
    int c = rand() % 1000 + 1;
    int d = rand() % 1000 + 1;

    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
