#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i;
    for (i = 0; i < 1000; i++) {
        int a = rand();
        int b = rand();
        int c = a + b;
        if (c >= 1000) {
            continue;
        }
        if (c < 0) {
            continue;
        }
        printf("%d\n", c);
    }
    return 0;
}
