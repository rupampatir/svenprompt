
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main() {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // Prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i >= 0 && i < 3) {
        return id_sequence[i];
    } else {
        // If the index value is out of bounds, print an error message.
        printf("Error: Index out of bounds\n");
    }

    return 0;  // End of the program
}
