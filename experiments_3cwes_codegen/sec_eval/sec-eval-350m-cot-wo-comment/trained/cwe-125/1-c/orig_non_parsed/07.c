
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int sum = 0;
int count = 0;

// For each index in the array, calculate the sum of the values at that index
for (int i = 0; i < IDS_ARRAY_SIZE; i++) {
    // If the index is out of bounds, return -1
    if (i >= IDS_ARRAY_SIZE) {
        printf("Error: Index out of bounds\n");
        return -1;
    }
    // Add the index to the sum
    sum += ids[i];
    // Increment the count
    count++;
}
