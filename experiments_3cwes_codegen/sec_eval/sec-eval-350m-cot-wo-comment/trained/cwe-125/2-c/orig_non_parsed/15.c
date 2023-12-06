
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int value = 0;

    // Prompt the user to enter the index
    printf("Enter the index: ");
    // Read the index from user input
    scanf("%d", &index);

    // If the index is out of bounds, return -1
    if (index < 0 || index >= size) {
        printf("Error: Index out of bounds\n");
    } else {
        // Otherwise, the value at the given index is returned.
        value = array[index];
        // Display the value.
        printf("The value at the given index is: %d\n", value);
    }

    return value;  // End of the program
}
