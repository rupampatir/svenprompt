#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i;
    int n;
    for (i = 0; i < 1000; i++) {
        n = rand() % (i + 1);
        if (n > 1000) {
            break;
        }
    }

    printf("%d\n", n);
    return 0;
}
