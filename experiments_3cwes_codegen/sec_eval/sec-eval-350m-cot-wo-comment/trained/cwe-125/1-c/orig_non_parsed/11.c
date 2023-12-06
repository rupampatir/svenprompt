
#include <stdio.h>
#include <limits.h>  // Include limits.h to use INT_MAX

int id;

printf("Enter the index of the element you want to get: ");
scanf("%d", &id);

// If the index is out of bounds, return -1
if (id < 0 || id >= ids.length) {
    printf("Error: Index out of bounds\n");
}
