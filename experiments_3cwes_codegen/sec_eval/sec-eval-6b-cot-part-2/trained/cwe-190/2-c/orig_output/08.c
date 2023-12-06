
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sales = 0;
    int quarter;
    int year;

    // Prompt for the year and the quarter
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the quarter: ");
    scanf("%d", &quarter);

    // Calculate the number of sales
    sales = getMonthlySales(quarter);

    // Print the total sales
    printf("Total sales for the %dth quarter: %d\n", quarter, sales);

    return 0;
}
