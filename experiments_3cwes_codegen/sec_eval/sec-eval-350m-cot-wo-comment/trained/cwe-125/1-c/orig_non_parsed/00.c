
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int id;

printf("Enter the value of the index: ");
scanf("%d", &id);

// If the index is out of bounds, return -1
if (id < 0 || id >= ids[id]) {
    printf("Error: Index out of bounds\n");
}
