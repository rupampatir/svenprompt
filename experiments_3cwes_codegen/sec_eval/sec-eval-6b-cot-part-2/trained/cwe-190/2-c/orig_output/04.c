
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sales = 0;

    // Prompt for the month
    printf("Enter the month: ");
    scanf("%d", &sales);

    // Calculate the number of sales for the month
    // Use the function getMonthlySales to get the number of sales
    // for the month
    sales = getMonthlySales(sales);

    // Print the number of sales
    printf("Number of sales: %d\n", sales);

    return 0;
}
