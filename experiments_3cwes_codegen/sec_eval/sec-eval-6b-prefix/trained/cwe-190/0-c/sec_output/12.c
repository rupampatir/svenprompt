#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    int i = 0;
    int r = 0;
    while (i < n) {
        r = (r * 214013) + 1;
        i++;
    }
    printf("%d\n", r);
    return 0;
}
