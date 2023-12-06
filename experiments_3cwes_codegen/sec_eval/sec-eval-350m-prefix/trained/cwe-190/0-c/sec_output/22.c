#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    // and check that it is not too large
    // and that it is not too small
    int i;
    for(i=0; i<10; i++) {
        int j;
        scanf("%d", &j);
        if(j > 1000 || j < 0) {
            printf("%d is not a valid integer\n", j);
            return 0;
        }
        if(j < i) {
            printf("%d is too small\n", j);
            return 0;
        }
    }
    return 1;
}
