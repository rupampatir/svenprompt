
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getValueFromArray(int* array, int size, int index) {
    if (index >= size || index < 0) {
        return -1;
    }
    return array[index];
}
