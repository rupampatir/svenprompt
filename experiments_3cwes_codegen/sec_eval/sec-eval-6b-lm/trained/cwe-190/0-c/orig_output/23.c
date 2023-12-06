#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int random_int = rand() % 1000 + 1;
    printf("%d\n", random_int);
    return 0;
}
