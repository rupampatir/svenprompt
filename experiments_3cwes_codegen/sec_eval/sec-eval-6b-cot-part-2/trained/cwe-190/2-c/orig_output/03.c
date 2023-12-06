
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sales = 0;
    int month = 1;

    // Prompt for the month
    printf("Enter the month: ");
    scanf("%d", &month);

    // Prompt for the number of sales for the month
    printf("Enter the number of sales for the month: ");
    scanf("%d", &sales);

    // Calculate the sales for the month
    int monthlySales = getMonthlySales(month);

    // Print the total sales for the month
    printf("The total sales for the month: %d\n", monthlySales + sales);

    return 0;
}
