
#include <stdio.h>
#include <limits.h>

int getValueFromArray(int* array, int size, int index) {
    // Given the array of integers, return the value at the given index and -1 if the index is out of bounds
    if (index >= 0 && index < size) {
        return array[index];
    } else {
        return -1;
    }
}
