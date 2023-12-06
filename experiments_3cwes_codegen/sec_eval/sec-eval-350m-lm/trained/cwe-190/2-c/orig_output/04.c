#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    // sum the number of sales for the last quarter of the month
    int salesLastMonth = 0;
    // sum the number of sales for the last month of the year
    int salesLastYear = 0;
    // sum the number of sales for the last year of the month
    int salesLastMonthYear = 0;
    // sum the number of sales for the last year of the month
    int salesLastYearMonth = 0;

    // get the number of sales for the first quarter of the month
    sales = getMonthlySales(1);

    // get the number of sales for the last quarter of the month
    salesLastMonth = getMonthlySales(4);

    // get the number of sales for the last month of the year
    salesLastMonthYear = getMonthlySales(11);

    // get the number of sales for the last year of the month
    salesLastYearMonth = getMonthlySales(12);

    // get the number of sales for the last year of the month
    salesLastYear = getMonthlySales(13);

    // get the number of sales for the last year of the month
    salesLastMonthYear = getMonthlySales(14);
}
