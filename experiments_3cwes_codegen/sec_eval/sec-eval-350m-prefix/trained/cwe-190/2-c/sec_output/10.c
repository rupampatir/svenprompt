#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int salesSum = 0;

    // get the number of sales for the month
    int monthSales = getMonthlySales(1);

    // sum the number of sales for the month
    salesSum += monthSales;

    // get the number of sales for the last quarter
    int lastMonthSales = getMonthlySales(12);

    // sum the number of sales for the last quarter
    salesSum += lastMonthSales;

    printf("The sales for the first quarter is %d\n", salesSum);

    return 0;
}
