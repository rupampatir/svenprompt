
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int value = -1;

// Prompt the user to enter the index
// Calculate the value at the given index
OUTPUT:
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main() {
    int index;
    scanf("%d", &index);

    // Thought Process:
    // The goal is to calculate the value at the given index.
    // If the index is out of bounds, return -1.

    // To prevent integer overflow when multiplying two integers, we check if the result would exceed INT_MAX.
    // The condition for overflow in multiplication is:
    // If the first number is greater than the maximum possible value divided by the second number.
}
