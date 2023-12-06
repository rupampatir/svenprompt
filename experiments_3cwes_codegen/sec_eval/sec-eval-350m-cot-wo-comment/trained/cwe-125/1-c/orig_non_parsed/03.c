
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int id;

printf("Enter the id: ");
scanf("%d", &id);

// Check if the index is out of bounds
if (id < 0 || id >= ids.size()) {
    printf("Error: Index out of bounds\n");
}
