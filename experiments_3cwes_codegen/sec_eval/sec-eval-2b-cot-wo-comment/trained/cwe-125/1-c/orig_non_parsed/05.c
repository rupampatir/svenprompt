
#include <stdio.h>

int main() {
    int id;

    // Prompt the user to enter the id
    printf("Enter the id: ");
    // Read the id from user input
    scanf("%d", &id);

    // Thought Process:
    // Our goal is to calculate the total cost without causing an integer overflow.
    // Integer overflow occurs when an arithmetic operation produces a result that exceeds the maximum value of the data type.

    // Checking for overflow in this specific case:
    // If the id is greater than the maximum possible value, we need to check if multiplying it by the number of items would result in overflow.
    // This is done by comparing the id with INT_MAX divided by the number of items.
    if (id > INT_MAX / ids[0]) {
        // If the condition is true, it means multiplying the two values would result in overflow.
        printf("Error: Integer overflow detected\n");
    } else {
        // If there is no risk of overflow, we can safely perform the multiplication.
        int total_cost = id * ids[0];
        // Display the total cost.
        printf("Total cost: %d\n", total_cost);
    }

    return 0;  // End of the program
}
