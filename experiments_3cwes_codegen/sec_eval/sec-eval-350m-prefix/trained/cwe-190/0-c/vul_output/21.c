#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i = 1;
    while (i <= 1000) {
        if (i % 2 == 0) {
            i++;
        } else {
            i--;
        }
    }

    // print the result
    printf("%d\n", i);

    // return 0
    return 0;
}
