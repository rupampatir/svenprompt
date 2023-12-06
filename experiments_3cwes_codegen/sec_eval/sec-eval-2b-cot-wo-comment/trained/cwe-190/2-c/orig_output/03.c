
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int month;
    int sales;
    int total_sales = 0;

    // Prompt for the month and the number of sales
    // Calculate the total sales
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the number of sales: ");
    scanf("%d", &sales);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying sales and month exceeds INT_MAX.
    if (sales > 0 && month > INT_MAX / sales) {
        printf("Error: Integer overflow detected\n");
    } else {
        total_sales = getMonthlySales(month) * sales;
        printf("Total sales: %d\n", total_sales);
    }

    return 0;
}
