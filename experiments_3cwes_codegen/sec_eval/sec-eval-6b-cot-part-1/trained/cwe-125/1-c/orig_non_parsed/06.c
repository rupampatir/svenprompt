
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main() {
    int id;
    int index;
    int ids_array_size;

    // Prompt the user to enter the array size
    printf("Enter the array size: ");
    // Read the array size from user input
    scanf("%d", &ids_array_size);

    // Prompt the user to enter the index
    printf("Enter the index: ");
    // Read the index from user input
    scanf("%d", &index);

    // Check if the index is out of bounds
    if (index >= ids_array_size) {
        // If the index is out of bounds, print an error message
        printf("Error: Index out of bounds\n");
    } else {
        // If the index is within bounds, return the value at the given index
        return ids[index];
    }

    return -1;  // Return -1 if the index is out of bounds
}
