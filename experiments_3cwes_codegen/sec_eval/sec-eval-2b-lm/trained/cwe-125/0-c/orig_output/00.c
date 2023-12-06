#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int id_sequence[3] = {1, 5, 7};
    int i;

    // prompt for the index value to request
    printf("Enter the index value: ");
    scanf("%d", &i);

    // if it is in bounds, return the value at the index in id_sequence
    if (i < 3) {
        printf("%d is in the sequence.\n", i);
        printf("%d is at index %d.\n", id_sequence[i], i);
    } else {
        printf("%d is not in the sequence.\n", i);
    }

    return 0;
}
