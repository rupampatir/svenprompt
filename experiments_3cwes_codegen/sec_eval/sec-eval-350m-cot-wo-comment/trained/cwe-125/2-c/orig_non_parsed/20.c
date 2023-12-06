
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int value = -1;

for (int i = 0; i < size; i++) {
    value = array[index + i];
    if (value == -1) {
        printf("Error: Index out of bounds\n");
        return -1;
    }
    // Display the value
    printf("%d\n", value);
}
