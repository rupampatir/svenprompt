#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i < 0 || i > 3) {
        printf("The index is out of bounds.\n");
        return 1;
    }

    // create a vector of integers
    int *id_sequence = malloc(sizeof(int) * 3);
    for (i = 0; i < 3; i++) {
        id_sequence[i] = i;
    }

    // call the function to get the value
    int value = get_value(id_sequence);

    // print the value
    printf("The value at index %d is %d\n", i, value);

    // free the memory allocated for the vector
    free(id_sequence);

    return 0;
}
