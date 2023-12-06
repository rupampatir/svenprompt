
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main() {
    int id;
    scanf("%d", &id);

    // Thought Process:
    // We need to check if the index is out of bounds.
    // If the index is out of bounds, return -1.
    if (id > IDS_ARRAY_SIZE) {
        // If the index is out of bounds, return -1.
        printf("Error: Index out of bounds\n");
    } else {
        // Otherwise, return the value at the given index
        printf("%d\n", id);
    }

    return 0;  // End of the program
}
