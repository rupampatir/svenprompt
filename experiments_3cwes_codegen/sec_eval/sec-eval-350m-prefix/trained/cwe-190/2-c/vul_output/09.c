#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    int sales_first_quarter[12];
    int sales_sum[12];
    int sales_sum_first_quarter[12];
    int sales_sum_first_quarter_month[12];
    int sales_sum_first_quarter_month_month[12];
    int sales_sum_first_quarter_month_month_month[12];
    int sales_sum_first_quarter_month_month_month_month[12];

    // initialize the array of sales
    sales[0] = 0;
    sales_first_quarter[0] = 0;
    sales_sum[0] = 0;
    sales_sum_first_quarter[0] = 0;
    sales_sum_first_quarter_month[0] = 0;
    sales_sum_first_quarter_month_month[0] = 0;
    sales_sum_first_quarter_month_month_month[0] = 0;
}
