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
        printf("Not in bounds\n");
        return 1;
    }

    // if it is in the middle of the sequence, return the value at the middle
    // of the sequence
    else if (i >= 3 && i < 6) {
        printf("In middle of sequence\n");
        return i;
    }

    // if it is in the middle of the sequence, return the value at the end
    // of the sequence
    else if (i >= 6 && i < 7) {
        printf("In end of sequence\n");
        return i;
    }

    // if it is in the middle of the sequence, return the value at the end
    // of the sequence
    else if (i >= 7 && i < 8) {
        printf("In end of sequence\n");
        return i;
    }

    // if it is in the middle of the sequence, return the value at the end
    // of the sequence
    else if (i >= 8 && i < 9) {
        printf("In end of sequence\n");
        return i;
    }

    // if it is in the middle of the sequence, return the value at the end
}
