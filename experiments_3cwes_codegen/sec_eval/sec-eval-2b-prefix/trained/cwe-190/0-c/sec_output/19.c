#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i, a, b;
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        scanf("%d", &b);
        printf("%d ", b);
    }
    printf("\n");
    return 0;
}
