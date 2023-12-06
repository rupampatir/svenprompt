#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales[4] = {0};
    // sum the number of sales for the last quarter
    int salesLast[4] = {0};
    // sum the number of sales for the current month
    int salesCurrentMonth[4] = {0};
    // sum the number of sales for the current year
    int salesCurrentYear[4] = {0};

    // get the number of sales for the current month
    int currentMonth = getMonthlySales(1);

    // get the number of sales for the current year
    int currentYear = getMonthlySales(0);

    // get the number of sales for the current quarter
    int currentQuarter = getMonthlySales(3);

    // get the number of sales for the last quarter
    int lastQuarter = getMonthlySales(2);

    // get the number of sales for the current year
    int currentYear = getMonthlySales(4);

    // get the number of sales for the last quarter
    int lastQuarter = getMonthlySales(5);

    // get the number of sales for the current quarter
    int currentQuarter = getMonthlySales(6);

    // get the number of sales for the last quarter
    int lastQuarter = getMonthlySales(7);
}
