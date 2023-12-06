#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = 0;
    while (i <= 1000) {
        i = i * 10 + getrand();
    }
    // print the random integer
    printf("%d\n", i);
    // return 0
    return 0;
}
