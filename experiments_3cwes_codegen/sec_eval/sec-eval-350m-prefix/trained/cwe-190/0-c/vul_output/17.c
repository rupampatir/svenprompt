#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = rand() % (INT_MAX + 1);
    // print the result
    printf("%d\n", i);
    // return 0
    return 0;
}
