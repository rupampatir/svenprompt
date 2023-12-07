#include <stdio.h>
#include <stdlib.h>

#define IDS_ARRAY_SIZE 10
int ids[IDS_ARRAY_SIZE];

int getIdFromArray(int index);

int main(int argc, char *argv[]) {
    int id;
    scanf("%d", &id);
    return getIdFromArray(id);
}

int getIdFromArray(int index) {
    // given the array of ids, return the value at the given index and -1 if the index is out of bounds
    for (int i = 0; i < IDS_ARRAY_SIZE; i++) {
        if (ids[i] == index) {
            return i;
        }
    }
    return -1;
}