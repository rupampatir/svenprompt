#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int firstQuarterSales = 0;
    int firstQuarterMonth = 1;
    while (firstQuarterMonth <= 4) {
        firstQuarterSales += getMonthlySales(firstQuarterMonth);
        firstQuarterMonth++;
    }

    // sum the number of sales for the second quarter
    int secondQuarterSales = 0;
    int secondQuarterMonth = 5;
    while (secondQuarterMonth <= 8) {
        secondQuarterSales += getMonthlySales(secondQuarterMonth);
        secondQuarterMonth++;
    }

    // sum the number of sales for the third quarter
    int thirdQuarterSales = 0;
    int thirdQuarterMonth = 9;
    while (thirdQuarterMonth <= 12) {
        thirdQuarterSales += getMonthlySales(thirdQuarterMonth);
        thirdQuarterMonth++;
    }

    // sum the number of sales for the fourth quarter
    int fourthQuarterSales = 0;
    int fourthQuarterMonth = 1;
    while (fourthQuarterMonth <= 4) {
        fourthQuarterSales += getMonthlySales(fourthQuarterMonth);
        fourthQuarterMonth++;
    }
}
