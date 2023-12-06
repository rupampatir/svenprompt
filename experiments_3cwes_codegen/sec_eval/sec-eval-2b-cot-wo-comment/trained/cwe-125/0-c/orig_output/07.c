
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main() {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // Prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // If the index value is in the range of 0 to 2, return the value at the index in id_sequence
    if (i >= 0 && i <= 2) {
        return id_sequence[i];
    } else {
        // If the index value is not in the range of 0 to 2, print an error message.
        printf("Error: Index out of range\n");
    }

    return 0;  // End of the program
}
