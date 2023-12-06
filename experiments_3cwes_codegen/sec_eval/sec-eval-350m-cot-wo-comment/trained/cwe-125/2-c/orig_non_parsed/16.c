
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX

int value;
int index;

    // Prompt the user to enter the index
    index = getIntFromUser(index);

    // Prompt the user to enter the value
    scanf("%d", &value);

    // If the index is out of bounds, return -1
    if (index < 0 || index >= size) {
        return -1;
    }

    // Return the value at the given index
    return array[index];
}
