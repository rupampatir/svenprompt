#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    if (argc > 1) {
        n = atoi(argv[1]);
    }
    int *a = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        a[i] = rand();
    }
    // sort the array using the selection sort algorithm
    int *b = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (b[j] < b[min]) {
                min = j;
            }
        }
        int tmp = b[i];
        b[i] = b[min];
        b[min] = tmp;
    }
    // print the array
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
