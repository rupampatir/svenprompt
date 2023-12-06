
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getValueFromArray(int* array, int size, int index) {
    // Check if the index is within the bounds of the array
    if (index < 0 || index >= size) {
        // If the index is out of bounds, return -1
        return -1;
    } else {
        // Return the value at the given index
        return array[index];
    }
}
