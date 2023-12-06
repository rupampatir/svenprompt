
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int id;
int index;

// Prompt the user to enter the index
scanf("%d", &index);

// Prompt the user to enter the value
scanf("%d", &id);

// Check if the index is out of bounds
if (index < 0 || index >= IDS_ARRAY_SIZE) {
    // If the index is out of bounds, return -1
    printf("Error: Index out of bounds\n");
}
