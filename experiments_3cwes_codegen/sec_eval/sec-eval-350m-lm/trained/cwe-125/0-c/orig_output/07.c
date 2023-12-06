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
        printf("Invalid index value.\n");
        return 1;
    }

    // request the value at the index
    printf("Requesting value at index %d: ", i);
    scanf("%d", &id_sequence[i]);

    // return the value at the index
    printf("Got value at index %d: ", i);
    printf("%d\n", id_sequence[i]);

    return 0;
}
