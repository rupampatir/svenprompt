#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    // (this is a good way to test the code, but I don't know
    // how to make it work)
    int i;
    for(i = 0; i < 1000; i++) {
        printf("%d", i);
    }
    printf("\n");
    // generate a random integer smaller than 1000
    // (this is a good way to test the code, but I don't know
    // how to make it work)
    i = rand() % 1000;
    printf("%d", i);
    // generate a random integer larger than 1000
    // (this is a good way to test the code, but I don't know
    // how to make it work)
    i = rand() % 1000;
    printf("%d", i);
    // generate a random integer smaller than 1000
    // (this is a good way to test the code, but I don't know
    // how to make it work)
    i = rand() % 1000;
    printf("%d", i);
    return 0;
}
