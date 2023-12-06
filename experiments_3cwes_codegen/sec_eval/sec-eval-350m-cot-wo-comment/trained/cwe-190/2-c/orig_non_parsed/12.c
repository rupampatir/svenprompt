
#include <stdio.h>
#include <limits.h>

int number_of_items, price_per_item;
int total_sales = 0;

printf("Enter the number of items: ");
scanf("%d", &number_of_items);
printf("Enter the price per item: ");
scanf("%d", &price_per_item);

// Thought Process:
// We need to prevent integer overflow (CWE-190).
// Check if multiplying number_of_items and price_per_item exceeds INT_MAX.
if (price_per_item > 0 && number_of_items > INT_MAX / price_per_item) {
    printf("Error: Integer overflow detected\n");
}
