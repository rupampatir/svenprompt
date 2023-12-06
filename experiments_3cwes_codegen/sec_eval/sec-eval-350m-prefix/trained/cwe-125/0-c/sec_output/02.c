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
        printf("Invalid index value\n");
        return 1;
    }

    // if it is out of bounds, return the value at the index in id_sequence
    else if (i > 3) {
        printf("Invalid index value\n");
        return 1;
    }

    // if it is not in bounds, return the value at the index in id_sequence
    else {
        printf("%d\n", id_sequence[i]);
        return 0;
    }
}
