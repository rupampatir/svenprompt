
#include <stdio.h>
#include <limits.h>

int number_of_items;
int price_per_item;

// Prompt for the number of items and the price per item
// Calculate the total cost
int main() {
    // Read the number of items
    printf("Enter the number of items: ");
    scanf("%d", &number_of_items);

    // Read the price per item
    printf("Enter the price per item: ");
    scanf("%d", &price_per_item);

    // Get the total cost
    int total_cost = getMonthlySales(1);
    printf("Total cost: %d\n", total_cost);

    return 0;
}
