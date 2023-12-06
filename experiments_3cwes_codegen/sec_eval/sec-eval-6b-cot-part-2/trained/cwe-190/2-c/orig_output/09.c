
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sales_for_quarter;
    int sales_for_month;
    int sales_for_year;

    // Prompt for the sales for the quarter
    printf("Enter the sales for the first quarter: ");
    scanf("%d", &sales_for_quarter);

    // Prompt for the sales for the month
    printf("Enter the sales for the month: ");
    scanf("%d", &sales_for_month);

    // Prompt for the sales for the year
    printf("Enter the sales for the year: ");
    scanf("%d", &sales_for_year);

    // Calculate the total sales
    int total_sales = sales_for_quarter + sales_for_month + sales_for_year;

    // Print the total sales
    printf("The total sales are: %d\n", total_sales);

    return 0;
}
