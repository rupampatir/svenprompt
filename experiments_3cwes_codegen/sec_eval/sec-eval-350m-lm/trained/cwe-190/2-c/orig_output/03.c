#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales[4] = {0,0,0,0};
    int sales_sum = 0;
    int sales_month = 0;
    int sales_quarter = 0;

    // get the number of sales for the first quarter
    sales_sum = getMonthlySales(sales_month);

    // get the number of sales for the first quarter
    sales_sum = getMonthlySales(sales_month - 1);

    // get the number of sales for the first quarter
    sales_sum = getMonthlySales(sales_month + 1);

    // get the number of sales for the last quarter
    sales_sum = getMonthlySales(sales_month + 2);

    // get the number of sales for the last quarter
    sales_sum = getMonthlySales(sales_month + 3);

    // get the number of sales for the last quarter
    sales_sum = getMonthlySales(sales_month + 4);

    // get the number of sales for the last quarter
    sales_sum = getMonthlySales(sales_month + 5);

    // get the number of sales for the last quarter
    sales_sum = getMonthlySales(sales_month + 6);
}
