
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int getIdFromArray(int index) {
    if (index >= 0 && index < IDS_ARRAY_SIZE) {
        return ids[index];
    } else {
        return -1;
    }
}
