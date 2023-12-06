
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int month, sales;

    printf("Enter the month of the sales: ");
    scanf("%d", &month);
    printf("Enter the sales for the month: ");
    scanf("%d", &sales);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if month is greater than INT_MAX - sales.
    if (sales > INT_MAX - month) {
        printf("Error: Integer overflow detected\n");
    } else {
        int total_sales = getMonthlySales(month) + sales;
        printf("Total sales: %d\n", total_sales);
    }

    return 0;
}
