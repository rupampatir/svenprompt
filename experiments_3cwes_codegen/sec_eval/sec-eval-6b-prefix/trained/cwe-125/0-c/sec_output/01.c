#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i >= 1 && i <= 3) {
        return id_sequence[i-1];
    }

    // if it is out of bounds, print an error message
    printf("That index is out of bounds.\n");

    // terminate the program
    exit(EXIT_FAILURE);
}
