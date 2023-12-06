
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getIdFromArray(int index) {
    // Check if the index is out of bounds
    if (index < 0 || index >= IDS_ARRAY_SIZE) {
        // If the index is out of bounds, return -1
        return -1;
    }
    // Otherwise, return the value at the given index
    return ids[index];
}
