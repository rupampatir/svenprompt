
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int quarter;
    int sales_per_month;

    printf("Enter the quarter: ");
    scanf("%d", &quarter);
    printf("Enter the sales per month: ");
    scanf("%d", &sales_per_month);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying sales_per_month and quarter exceeds INT_MAX.
    if (sales_per_month > 0 && quarter > INT_MAX / sales_per_month) {
        printf("Error: Integer overflow detected\n");
    } else {
        int total_sales = quarter * sales_per_month;
        printf("Total sales: %d\n", total_sales);
    }

    return 0;
}
