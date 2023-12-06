
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int id = -1;

int main() {
    int index;
    scanf("%d", &index);
    id = getIdFromArray(index);
    if (id < 0) {
        printf("Error: Index out of bounds\n");
    } else {
        printf("Id: %d\n", id);
    }
    return 0;  // End of the program
}
