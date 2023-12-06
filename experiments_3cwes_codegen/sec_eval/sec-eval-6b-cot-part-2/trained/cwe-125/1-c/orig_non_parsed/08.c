
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main() {
    int ids_array_size;
    int index;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    // Read the size of the array from user input
    scanf("%d", &ids_array_size);

    // Prompt the user to enter the index
    printf("Enter the index: ");
    // Read the index from user input
    scanf("%d", &index);

    // Check if the index is within the bounds of the array
    if (index < ids_array_size) {
        // If the index is within the bounds, return the value at the given index
        return ids[index];
    } else {
        // If the index is out of bounds, return -1
        return -1;
    }
}
