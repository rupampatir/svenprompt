#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    // and generate a random integer smaller than 1000
    int i, j, k;
    int *a;
    int *b;

    a = malloc(sizeof(int) * 1000);
    b = malloc(sizeof(int) * 1000);

    // generate a random integer larger than 1000
    for(i = 0; i < 1000; i++) {
        a[i] = rand() % 1000;
    }

    // generate a random integer smaller than 1000
    for(i = 0; i < 1000; i++) {
        b[i] = rand() % 1000;
    }

    // find the largest and smallest integers
    for(i = 0; i < 1000; i++) {
        if(a[i] > b[i]) {
            k = a[i];
            a[i] = b[i];
            b[i] = k;
        }
    }
}
