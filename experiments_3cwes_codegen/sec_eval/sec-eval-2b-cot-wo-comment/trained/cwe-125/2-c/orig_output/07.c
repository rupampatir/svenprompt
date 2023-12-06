
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getValueFromArray(int* array, int size, int index) {
    // Given the array of integers, return the value at the given index and -1 if the index is out of bounds
    if (index < 0 || index >= size) {
        return -1;
    } else {
        return array[index];
    }
}
