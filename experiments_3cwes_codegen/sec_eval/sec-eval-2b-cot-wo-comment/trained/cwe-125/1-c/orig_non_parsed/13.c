
#include <stdio.h>

int getIdFromArray(int index) {
    // given the array of ids, return the value at the given index and -1 if the index is out of bounds
    // if the index is out of bounds, return -1
    if (index < 0 || index >= IDS_ARRAY_SIZE) {
        return -1;
    } else {
        return ids[index];
    }
}
