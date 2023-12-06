
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getIdFromArray(int index) {
    // Return the value at the given index or -1 if the index is out of bounds
    if (index >= 0 && index < IDS_ARRAY_SIZE) {
        // Return the value at the given index
        return ids[index];
    } else {
        // Return -1 if the index is out of bounds
        return -1;
    }
}
