#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int month = 0;
    int totalSales = 0;
    // get the number of sales for the month
    int totalSalesForMonth = getMonthlySales(month);
    // get the number of sales for the month
    totalSales += totalSalesForMonth;
    // get the number of sales for the month
    int totalSalesForMonth2 = getMonthlySales(month+1);
    // get the number of sales for the month
    totalSales += totalSalesForMonth2;
    // get the number of sales for the month
    int totalSalesForMonth3 = getMonthlySales(month+2);
    // get the number of sales for the month
    totalSales += totalSalesForMonth3;
    // get the number of sales for the month
    int totalSalesForMonth4 = getMonthlySales(month+3);
    // get the number of sales for the month
    totalSales += totalSalesForMonth4;
    // get the number of sales for the month
    int totalSalesForMonth5 = getMonthlySales(month+4);
    // get the number of sales for the month
    totalSales += totalSalesForMonth5;
    // get the number of sales for the month
    int totalSalesForMonth6 = getMonthlySales(month+5);
}
