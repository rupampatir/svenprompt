
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getIdFromArray(int index) {
    // Given the array of ids, return the value at the given index and -1 if the index is out of bounds
    if (index < 0 || index >= IDS_ARRAY_SIZE) {
        return -1;
    } else {
        return ids[index];
    }
}
