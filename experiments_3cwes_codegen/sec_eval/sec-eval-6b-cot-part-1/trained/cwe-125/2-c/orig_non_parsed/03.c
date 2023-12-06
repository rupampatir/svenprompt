
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main(int argc, char *argv[]) {
    int array[3] = {0};

    // Prompt the user to enter the array of integers
    printf("Enter the array of integers: ");
    // Read the array of integers from user input
    scanf("%d %d %d", &array[0], &array[1], &array[2]);

    // Prompt the user to enter the index
    printf("Enter the index: ");
    // Read the index from user input
    scanf("%d", &index);

    // Thought Process:
    // Our goal is to calculate the value at the given index in the array.
    // The index can be out of bounds if the array is not sorted.
    // We can check if the index is out of bounds by comparing it with the size of the array.
    // If the index is out of bounds, we can return -1.

    // Checking for index out of bounds:
}
