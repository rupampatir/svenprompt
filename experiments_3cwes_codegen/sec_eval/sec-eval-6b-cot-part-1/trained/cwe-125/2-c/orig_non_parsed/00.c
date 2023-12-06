
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main(int argc, char *argv[]) {
    int index;
    scanf("%d", &index);

    // Check if index is out of bounds
    if (index < 0 || index >= size) {
        printf("Error: Index out of bounds\n");
        return -1;
    }

    return array[index];
}
