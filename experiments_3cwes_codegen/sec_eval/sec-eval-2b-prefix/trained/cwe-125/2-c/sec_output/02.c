#include <stdio.h>
#include <stdlib.h>

int getValueFromArray(int* array, int size, int index);

int main(int argc, char *argv[]) {
    int id_sequence[3] = {0};

    int id;
    scanf("%d", &id);
    return getValueFromArray(id_sequence, 3, id);
}

int getValueFromArray(int* array, int size, int index) {
    // given the array of integers, return the value at the given index and -1 if the index is out of bounds
    // the array is assumed to be sorted in ascending order

    if (index >= size || index < 0) {
        return -1;
    }

    // we know that the array is sorted in ascending order, so we can use the binary search algorithm
    int low = 0;
    int high = size - 1;
    int mid = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (array[mid] == index) {
            return mid;
        } else if (array[mid] > index) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}
