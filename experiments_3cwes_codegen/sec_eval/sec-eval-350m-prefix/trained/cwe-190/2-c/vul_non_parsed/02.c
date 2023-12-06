#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    int sales_month[12];
    int sales_year[12];
    int sales_month_year[12];
    int sales_month_year_count = 0;
    int sales_month_year_count_sum = 0;
    int sales_month_year_sum = 0;
    int sales_month_year_sum_sum = 0;
    int sales_month_year_sum_count = 0;
    int sales_month_year_sum_count_sum = 0;
    int sales_month_year_sum_count_sum_sum = 0;
    int sales_month_year_sum_count_sum_sum = 0;
    int sales_month_year_sum_count_sum_sum = 0;

    // calculate the number of sales for the first quarter of the month
    getMonthlySales(1);

    // calculate the number of sales for the first quarter of the year
    getMonthlySales(1);

    // calculate the number of sales for the last quarter of the year
    getMonthlySales(2);

    // calculate the number of sales for the last quarter of the month
    getMonthlySales(3);
}
