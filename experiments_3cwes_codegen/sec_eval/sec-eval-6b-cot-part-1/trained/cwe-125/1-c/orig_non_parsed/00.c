
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main() {
    int index;
    // Prompt the user to enter the index
    printf("Enter the index: ");
    // Read the index from user input
    scanf("%d", &index);

    // Check if the index is out of bounds
    if (index < 0 || index >= IDS_ARRAY_SIZE) {
        // If the index is out of bounds, print an error message.
        printf("Error: Index out of bounds\n");
    } else {
        // If the index is within bounds, return the value at the index
        return ids[index];
    }

    return -1;  // End of the program
}
