#include <stdio.h>
#include <stdlib.h>

int getValueFromArray(int* array, int size, int index);

int main(int argc, char *argv[]) {
    int id_sequence[3] = {0};

    int id;
    scanf("%d", &id);
    return getValueFromArray(id_sequence, 3, id);
}

int getValueFromArray(int* array, int size, int index) {
    // given the array of integers, return the value at the given index and -1 if the index is out of bounds
    // if the index is out of bounds, return -1
    // if the index is in bounds, return the value at that index
    // if the index is in bounds and the value is not 0, return the value at that index
    // if the index is in bounds and the value is 0, return -1

    if (index < 0 || index >= size) {
        return -1;
    }

    return array[index];
}
