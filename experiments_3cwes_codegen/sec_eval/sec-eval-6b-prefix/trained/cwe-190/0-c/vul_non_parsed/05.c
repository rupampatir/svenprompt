#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    int *p = (int *)malloc(sizeof(int) * n);
    int i;
    for (i = 0; i < n; i++) {
        p[i] = rand() % n;
    }
    
    // sort the array
    qsort(p, n);
    
    // print the array
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    
    // free the allocated memory
    free(p);
    
    return 0;
}
