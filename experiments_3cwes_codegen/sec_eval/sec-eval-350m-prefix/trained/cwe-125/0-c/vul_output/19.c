#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i < 1 || i > 3) {
        printf("Invalid index value.\n");
        return 1;
    }

    // request the value at the index
    printf("The value at index %d is %d\n", i, id_sequence[i-1]);

    // return 0 if the index is out of bounds
    return 0;
}
