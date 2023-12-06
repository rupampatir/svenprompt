
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sales = 0;
    int quarter = 0;

    // Prompt for the quarter
    printf("Enter the quarter (1-4): ");
    scanf("%d", &quarter);

    // Prompt for the number of sales
    printf("Enter the number of sales: ");
    scanf("%d", &sales);

    // Calculate the total sales for the first quarter
    // We will use the getMonthlySales function to calculate the total sales
    // for the first quarter.
    int total_sales = getMonthlySales(quarter);

    // Print the total sales for the first quarter
    printf("Total sales for the first quarter: %d\n", total_sales);

    return 0;
}
