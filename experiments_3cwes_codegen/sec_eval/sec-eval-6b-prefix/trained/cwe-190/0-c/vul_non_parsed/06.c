#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    int *a = (int *) malloc(sizeof(int) * n);
    int *b = (int *) malloc(sizeof(int) * n);
    int i;
    for (i = 0; i < n; i++) {
        a[i] = rand() % 1000;
        b[i] = a[i];
    }
    
    // sort both arrays
    qsort(a, n, sizeof(int), &compare);
    qsort(b, n, sizeof(int), &compare);
    
    // print the sorted arrays
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    // free the allocated memory
    free(a);
    free(b);
    
    return 0;
}
