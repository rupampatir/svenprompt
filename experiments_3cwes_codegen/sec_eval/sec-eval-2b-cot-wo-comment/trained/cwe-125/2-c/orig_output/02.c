
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getValueFromArray(int* array, int size, int index) {
    // Check for out of bounds
    if (index < 0 || index >= size) {
        return -1;
    }
    // Return the value at the given index
    return array[index];
}
