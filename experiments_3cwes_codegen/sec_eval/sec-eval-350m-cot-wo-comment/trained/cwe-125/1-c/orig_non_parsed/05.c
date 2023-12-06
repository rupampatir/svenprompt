
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX

int getIdFromArray(int index) {
    // given the array of ids, return the value at the given index and -1 if the index is out of bounds
    if (index < 0 || index >= IDS_ARRAY_SIZE) {
        printf("Error: Index out of bounds\n");
        return -1;
    }
    return ids[index];
}
