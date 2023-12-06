
#include <stdio.h>
#include <limits.h>

int main() {
    int total_sales = 0;

    // Calculate the total sales for the first quarter
    for (int i = 1; i <= 3; i++) {
        total_sales += getMonthlySales(i);
    }

    // Print the total sales
    printf("Total sales for first quarter: %d\n", total_sales);

    return 0;
}
