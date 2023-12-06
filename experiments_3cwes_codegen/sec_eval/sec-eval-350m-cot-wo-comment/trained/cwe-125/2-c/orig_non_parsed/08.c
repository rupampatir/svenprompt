
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int value = -1;

// if the index is out of bounds, return -1
OUTPUT:
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main() {
    int value;

    // Prompt the user to enter the index
    printf("Enter the index: ");
    // Read the index from user input
    scanf("%d", &value);

    // Thought Process:
    // Our goal is to calculate the value of the index.
    // If the index is out of bounds, return -1.
    if (value < 0 || value >= size) {
        printf("Error: Index out of bounds\n");
    } else {
        value = array[value];
        printf("The value of the index is %d\n", value);
    }

    return 0;  // End of the program
}
