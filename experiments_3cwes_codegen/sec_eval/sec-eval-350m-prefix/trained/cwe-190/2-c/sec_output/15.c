#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    // sum the number of sales for the last quarter of the month
    int sales_last = 0;

    // get the number of sales for the month
    int month = getMonthlySales(1);
    // get the number of sales for the month
    int month_sales = getMonthlySales(month);

    // sum the number of sales for the month
    sales += month_sales;

    // sum the number of sales for the last quarter of the month
    sales_last += month_sales;

    printf("Monthly sales for %d: %d\n", month, sales);
    printf("Last quarter sales for %d: %d\n", month, sales_last);

    return 0;
}
