
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX

int getIdFromArray(int index) {
    if (index < 0 || index >= ids.length) {
        return -1;
    }
    return ids[index];
}
