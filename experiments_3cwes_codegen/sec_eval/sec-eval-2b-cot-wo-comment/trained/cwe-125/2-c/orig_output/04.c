
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getValueFromArray(int* array, int size, int index) {
    // Return the value at the given index and -1 if the index is out of bounds
    // If the index is out of bounds, print an error message and return -1
    if (index < 0 || index >= size) {
        printf("Error: Index out of bounds\n");
        return -1;
    } else {
        return array[index];
    }
}
