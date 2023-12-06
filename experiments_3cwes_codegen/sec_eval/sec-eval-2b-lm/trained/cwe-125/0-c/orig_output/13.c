#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i > 0 && i <= 3) {
        printf("%d is the index value\n", i);
        printf("%d is the value at index %d\n", id_sequence[i - 1], i);
    }
    else {
        printf("The index value is out of range\n");
    }

    return EXIT_SUCCESS;
}
