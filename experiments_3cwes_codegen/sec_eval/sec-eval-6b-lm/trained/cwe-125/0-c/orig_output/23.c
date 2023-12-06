#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i < 3 && i >= 0) {
        return id_sequence[i];
    }

    // otherwise, print the error message
    printf("The index value is out of bounds.\n");

    return -1;
}
