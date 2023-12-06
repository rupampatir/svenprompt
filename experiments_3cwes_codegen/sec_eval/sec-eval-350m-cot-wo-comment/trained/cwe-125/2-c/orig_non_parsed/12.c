
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX

int value;

    value = array[index];
    if (value < 0) {
        // If the index is out of bounds, return -1.
        value = -1;
    } else {
        // Otherwise, return the value.
        value = array[index];
    }

    return value;
}
