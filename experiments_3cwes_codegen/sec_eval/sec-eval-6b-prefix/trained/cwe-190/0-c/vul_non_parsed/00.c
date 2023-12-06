#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n;
    scanf("%d", &n);
    int *a = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // find the maximum element
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    // find the maximum element that is smaller than max
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < max && a[i] < min) {
            min = a[i];
        }
    }
    
    // print the result
    printf("%d %d\n", max, min);
    
    // free the memory
    free(a);
    
    return 0;
}
