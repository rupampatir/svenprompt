
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int total_sales = 0;
    int month;

    // Prompt for the month
    printf("Enter the month: ");
    scanf("%d", &month);

    // Check if the month is between 1 and 12
    if (month < 1 || month > 12) {
        printf("Error: Invalid month\n");
    } else {
        // Calculate the total sales for the first quarter
        total_sales = getMonthlySales(month);
        printf("Total sales for the first quarter: %d\n", total_sales);
    }

    return 0;
}
