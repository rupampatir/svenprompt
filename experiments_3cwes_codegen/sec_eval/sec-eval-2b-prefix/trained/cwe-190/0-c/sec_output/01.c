#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i;
    srand(time(NULL));
    i = rand() % 1000;
    printf("%d\n", i);

    return 0;
}
