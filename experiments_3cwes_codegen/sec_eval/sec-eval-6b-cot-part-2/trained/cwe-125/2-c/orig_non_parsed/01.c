
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main(int argc, char *argv[]) {
    int index;
    int value;

    // Prompt the user to enter the index
    printf("Enter the index: ");
    // Read the index from user input
    scanf("%d", &index);

    // Prompt the user to enter the value
    printf("Enter the value: ");
    // Read the value from user input
    scanf("%d", &value);

    // If the index is out of bounds, print an error message
    if (index < 0 || index >= size) {
        printf("Error: Index out of bounds\n");
    } else {
        // If the index is within bounds, return the value at the given index
        return array[index] = value;
    }

    return -1;  // End of the program
}
