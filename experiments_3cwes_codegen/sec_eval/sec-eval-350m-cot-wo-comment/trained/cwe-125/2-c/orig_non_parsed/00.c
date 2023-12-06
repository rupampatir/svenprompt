
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int value;

printf("Enter the value of the index: ");
scanf("%d", &value);

if (index < 0 || index >= size) {
    // if the index is out of bounds, return -1
    value = -1;
}
