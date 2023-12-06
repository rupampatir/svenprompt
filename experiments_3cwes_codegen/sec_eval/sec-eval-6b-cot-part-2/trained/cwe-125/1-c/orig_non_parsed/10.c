
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main(int argc, char *argv[]) {
    int index;
    scanf("%d", &index);
    if (index >= 0 && index < IDS_ARRAY_SIZE) {
        return ids[index];
    } else {
        printf("Error: Index out of bounds\n");
        return -1;
    }
}
