#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int a = rand() % (1000 + 1);
    // generate a random integer larger than 1000
    int b = rand() % (1000 + 1);
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
