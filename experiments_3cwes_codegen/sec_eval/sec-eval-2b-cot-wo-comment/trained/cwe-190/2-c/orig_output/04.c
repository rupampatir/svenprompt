
#include <stdio.h>
#include <limits.h>

int main() {
    int total_sales;
    int quarter;

    // Prompt for the quarter and calculate the total sales
    printf("Enter the quarter number: ");
    scanf("%d", &quarter);
    printf("Enter the number of sales: ");
    scanf("%d", &total_sales);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying total_sales and quarter exceeds INT_MAX.
    if (total_sales > INT_MAX / quarter) {
        printf("Error: Integer overflow detected\n");
    } else {
        int quarter_sales = total_sales / quarter;
        printf("Quarter sales: %d\n", quarter_sales);
    }

    return 0;
}
