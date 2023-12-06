
#include <stdio.h>

int getValueFromArray(int* array, int size, int index) {
    // given the array of integers, return the value at the given index and -1 if the index is out of bounds
    if (index >= size || index < 0) {
        return -1;
    } else {
        return array[index];
    }
}
