
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main(int argc, char *argv[]) {
    int i;

    // prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i < 0 || i >= 3) {
        printf("Error: Index out of bounds\n");
    } else {
        printf("%d\n", id_sequence[i]);
    }

    return 0;  // End of the program
}
