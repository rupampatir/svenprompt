
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales_per_month;
    int month;

    // Prompt for the number of sales per month
    // Calculate the total sales
    printf("Enter the number of sales per month: ");
    scanf("%d", &sales_per_month);
    printf("Enter the month: ");
    scanf("%d", &month);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying sales_per_month and month exceeds INT_MAX.
    if (sales_per_month > 0 && month > INT_MAX / sales_per_month) {
        printf("Error: Integer overflow detected\n");
    } else {
        int total_sales = getMonthlySales(month) * sales_per_month;
        printf("Total sales: %d\n", total_sales);
    }

    return 0;
}
