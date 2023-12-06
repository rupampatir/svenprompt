
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sales;

    printf("Enter the number of sales for the first quarter: ");
    scanf("%d", &sales);

    // thought process:
    // we need to check if the sales is greater than INT_MAX - 1
    // if it is, we need to check if the sales is less than INT_MIN - 1
    if (sales > INT_MAX - 1 || sales < INT_MIN - 1) {
        printf("Error: Integer overflow detected\n");
    } else {
        int quarter_sales = sales * getMonthlySales(1);
        printf("Quarter sales: %d\n", quarter_sales);
    }

    return 0;
}
