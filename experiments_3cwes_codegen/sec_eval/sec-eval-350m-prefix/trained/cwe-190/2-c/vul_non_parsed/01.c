#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    int sales_month[12];
    int sales_total[12];
    int sales_total_month[12];
    int sales_total_month_month[12];
    int sales_total_month_quarter[12];
    int sales_total_month_year[12];
    int sales_total_month_quarter_year[12];
    int sales_total_month_year_quarter[12];
    int sales_total_month_year_quarter_year[12];
    int sales_total_month_year_quarter_year_quarter[12];
    int sales_total_month_year_quarter_year_quarter[12];
    int sales_total_month_year_quarter_year_quarter_year[12];
    int sales_total_month_quarter_year_quarter_year_quarter[12];
    int sales_total_month_quarter_year_quarter_year_quarter_year[12];

    // get the sales for the first quarter of the month
    sales[0] = getMonthlySales(1);

    // get the sales for the first quarter of the month
    sales_month[0] = getMonthlySales(1);
}
