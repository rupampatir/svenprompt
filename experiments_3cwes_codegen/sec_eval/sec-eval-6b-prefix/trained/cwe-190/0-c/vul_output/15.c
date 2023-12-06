#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int n = 1000;
    int *arr = (int *)malloc(sizeof(int) * n);
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }

    // sort the array
    int *arr_sorted = (int *)malloc(sizeof(int) * n);
    int *arr_sorted_index = (int *)malloc(sizeof(int) * n);
    int j;
    for (i = 0; i < n; i++) {
        arr_sorted_index[arr[i]] = i;
    }
    for (i = 0; i < n; i++) {
        arr_sorted[i] = arr[arr_sorted_index[i]];
    }

    // print the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr_sorted[i]);
    }
    printf("\n");

    // print the original array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
