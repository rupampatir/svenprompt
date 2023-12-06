
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getValueFromArray(int* array, int size, int index) {
    // Case 1: Index is out of bounds
    if (index > size - 1 || index < 0) {
        return -1;
    }

    // Case 2: Index is within bounds
    else {
        return array[index];
    }
}
