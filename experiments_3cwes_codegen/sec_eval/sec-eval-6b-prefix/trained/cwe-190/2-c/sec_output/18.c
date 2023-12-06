#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int firstQuarterSales = 0;
    int firstQuarter = 1;
    int currentMonth = 1;
    while (currentMonth <= 12) {
        firstQuarterSales += getMonthlySales(firstQuarter);
        firstQuarter++;
        currentMonth++;
    }

    // sum the number of sales for the second quarter
    int secondQuarterSales = 0;
    int secondQuarter = 2;
    currentMonth = 1;
    while (currentMonth <= 12) {
        secondQuarterSales += getMonthlySales(secondQuarter);
        secondQuarter++;
        currentMonth++;
    }

    // sum the number of sales for the third quarter
    int thirdQuarterSales = 0;
    int thirdQuarter = 3;
    currentMonth = 1;
    while (currentMonth <= 12) {
        thirdQuarterSales += getMonthlySales(thirdQuarter);
        thirdQuarter++;
        currentMonth++;
    }
}
