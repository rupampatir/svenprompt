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
        printf("Index %d out of bounds\n", i);
        return 1;
    }

    // get the index value from the index
    printf("Enter the index value: ");
    scanf("%d", &id_sequence[i]);

    // if it is in bounds, return the value at the index in id_sequence
    if (id_sequence[i] < 0 || id_sequence[i] > 3) {
        printf("Index %d out of bounds\n", id_sequence[i]);
        return 1;
    }

    printf("The index %d is %d\n", i, id_sequence[i]);
    return 0;
}
