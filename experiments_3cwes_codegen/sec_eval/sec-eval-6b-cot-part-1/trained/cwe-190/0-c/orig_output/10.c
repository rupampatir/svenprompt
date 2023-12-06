
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int number_of_items;
    int price_per_item;
    int total_cost;

    // Prompt for the number of items and the price per item
    printf("Enter the number of items: ");
    scanf("%d", &number_of_items);
    printf("Enter the price per item: ");
    scanf("%d", &price_per_item);

    // Calculate the total cost
    total_cost = number_of_items * price_per_item;

    // Print out the total cost
    printf("Total cost: %d\n", total_cost);

    return 0;
}
