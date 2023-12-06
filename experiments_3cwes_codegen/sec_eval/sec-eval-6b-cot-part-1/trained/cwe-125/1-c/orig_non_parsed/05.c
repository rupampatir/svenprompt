
#include <stdio.h>
#include <limits.h>

int main() {
    int id;
    scanf("%d", &id);
    if (id < 0 || id >= IDS_ARRAY_SIZE) {
        printf("Error: Index out of bounds\n");
        return -1;
    }
    return ids[id];
}
