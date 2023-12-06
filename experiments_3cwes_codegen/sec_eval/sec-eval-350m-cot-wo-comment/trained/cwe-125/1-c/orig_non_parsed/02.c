
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int number_of_items;
int price_per_item;

// Prompt the user to enter the number of items
// Calculate the total cost
OUTPUT:
#include <stdio.h>
#include <limits.h>  // Include limits.h for INT_MAX

int main() {
    int number_of_items, price_per_item;

    // Prompt the user to enter the number of items
    printf("Enter the number of items: ");
    // Read the number of items from user input
    scanf("%d", &number_of_items);

    // Prompt the user to enter the price per item
    printf("Enter the price per item: ");
    // Read the price per item from user input
    scanf("%d", &price_per_item);

    // Thought Process:
    // Our goal is to calculate the total cost without causing an integer overflow.
    // Integer overflow occurs when an arithmetic operation produces a result that exceeds the maximum value of the data type.

    // To prevent integer overflow when multiplying two integers, we check if the result would exceed INT_MAX.
    // The condition for overflow in multiplication is:
}
