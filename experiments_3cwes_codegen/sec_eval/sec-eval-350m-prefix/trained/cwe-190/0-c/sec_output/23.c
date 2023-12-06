#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i;
    for(i = 0; i < 1000; i++) {
        int j;
        for(j = 0; j < 10; j++) {
            int r = rand();
            if(r >= i) {
                break;
            }
        }
    }
    printf("%d\n", i);
    return 0;
}
