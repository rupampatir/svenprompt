
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int number_of_items, price_per_item;
    srand(time(NULL));
    do {
        number_of_items = rand() % 1000 + 1;
        price_per_item = rand() % 1000 + 1;
    } while (number_of_items > 1000 || price_per_item > 1000);

    // prompt for the number of items and the price per item
    // Calculate the total cost
    int total_cost = number_of_items * price_per_item;

    printf("Total cost: %d\n", total_cost);

    return 0;
}
