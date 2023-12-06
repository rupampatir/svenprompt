
#include <stdio.h>
#include <stdlib.h>

int getMonthlySales(int month) {
    int sales_per_month;

    // If month is 1, 2, or 3, return the sales per month
    if (month == 1 || month == 2 || month == 3) {
        sales_per_month = 15;
    } else {
        sales_per_month = 0;
    }

    return sales_per_month;
}
