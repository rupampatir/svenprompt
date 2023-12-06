#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    int *a = (int *)malloc(sizeof(int) * n);
    int i;
    for(i = 0; i < n; i++) {
        a[i] = rand() % n;
    }

    // sort the array
    int *b = (int *)malloc(sizeof(int) * n);
    int j = 0;
    for(i = 0; i < n; i++) {
        while(j > 0 && a[j] < a[i]) {
            j = b[j - 1];
        }
        b[j++] = a[i];
    }

    // print the sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    // free the allocated memory
    free(a);
    free(b);

    return 0;
}
