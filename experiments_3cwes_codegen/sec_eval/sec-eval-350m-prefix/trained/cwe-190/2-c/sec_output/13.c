#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales[4];
    int month = 0;
    int totalSales = 0;
    int monthTotalSales = 0;
    int salesSum = 0;

    // get the number of sales in the first quarter
    sales[0] = getMonthlySales(month);
    month++;

    // get the number of sales in the last quarter
    sales[3] = getMonthlySales(month - 1);

    // sum the number of sales for the last quarter
    totalSales += sales[3];

    // sum the number of sales for the first quarter
    totalSales += sales[0];

    // sum the number of sales for the last quarter
    totalSales += sales[3];

    // sum the number of sales for the first quarter
    totalSales += sales[0];

    // sum the number of sales for the last quarter
    totalSales += sales[3];

    // sum the number of sales for the first quarter
    totalSales += sales[0];

    // sum the number of sales for the last quarter
    totalSales += sales[3];

    // sum the number of sales for the first quarter
    totalSales += sales[0];

    // sum the number of sales for the last quarter
    totalSales += sales[3];
}
