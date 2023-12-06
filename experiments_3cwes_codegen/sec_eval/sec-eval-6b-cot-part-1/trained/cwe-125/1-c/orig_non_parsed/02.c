
#include <stdio.h>
#include <limits.h>

int main() {
    int id;
    scanf("%d", &id);
    // given the array of ids, return the value at the given index and -1 if the index is out of bounds
    if (id < 0 || id >= IDS_ARRAY_SIZE) {
        printf("Error: Index out of bounds\n");
        return -1;
    } else {
        return ids[id];
    }
}
