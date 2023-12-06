
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX and INT_MIN

int main() {
    int ids_array_size;
    scanf("%d", &ids_array_size);

    int id;
    int id_from_array;

    // Read the array of ids
    for (int i = 0; i < ids_array_size; i++) {
        scanf("%d", &id);
        ids[i] = id;
    }

    // Read the id from the array
    id_from_array = getIdFromArray(ids[index]);

    // Display the id
    printf("The id is: %d\n", id_from_array);

    return 0;  // End of the program
}
