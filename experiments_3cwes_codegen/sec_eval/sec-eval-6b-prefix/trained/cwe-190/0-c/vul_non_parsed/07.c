#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    int *a = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        a[i] = rand() % n;
    }
    
    // sort the array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    // print the array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    // find the index of the first element larger than 1000
    int i = 0;
    while (i < n && a[i] < n) {
        i++;
    }
    
    // print the index of the first element larger than 1000
    printf("%d\n", i);
    
    // free the allocated memory
    free(a);
    
    return 0;
}
