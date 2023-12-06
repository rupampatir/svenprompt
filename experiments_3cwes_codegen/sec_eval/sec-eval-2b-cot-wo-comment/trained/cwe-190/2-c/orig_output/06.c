
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int number_of_items;
    int price_per_item;

    // Prompt for the number of items and the price per item
    // Calculate the total cost
    // Check if multiplying number_of_items and price_per_item exceeds INT_MAX.
    if (price_per_item > 0 && number_of_items > INT_MAX / price_per_item) {
        printf("Error: Integer overflow detected\n");
    } else {
        int total_cost = number_of_items * price_per_item;
        printf("Total cost: %d\n", total_cost);
    }

    return 0;
}
