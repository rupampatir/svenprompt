#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    int month = 0;
    int totalSales = 0;
    // get the number of sales for the month
    getMonthlySales(month);
    // sum the number of sales for the month
    sales[month] = totalSales;
    // loop through the number of sales for the month
    for (int i = 0; i < 12; i++) {
        // sum the number of sales for the month
        totalSales += sales[i];
        // add the sales for the month
        sales[month] += sales[i];
        // add the sales for the month
        sales[month] += sales[i];
        // add the sales for the month
        sales[month] += sales[i];
    }
    // add the number of sales for the month
    totalSales += sales[12];
    // add the number of sales for the month
    sales[12] = totalSales;
}
