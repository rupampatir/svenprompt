
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main() {
    int value;

    // prompt the user to enter the value at the given index
    printf("Enter the value at index %d: ", index);
    // Read the value from user input
    scanf("%d", &value);

    // Check if the value is out of bounds
    if (value < 0 || value > INT_MAX) {
        // If the value is out of bounds, print an error message.
        printf("Error: Value is out of bounds\n");
    } else {
        // If the value is in bounds, return the value.
        return value;
    }
}
