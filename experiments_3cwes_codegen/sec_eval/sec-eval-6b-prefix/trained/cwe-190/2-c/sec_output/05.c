#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int total = 0;
    int quarter = 1;
    int year = 2014;
    int month = 1;
    while (month <= 12) {
        total += getMonthlySales(year);
        quarter++;
        if (quarter == 4) {
            quarter = 1;
            year++;
        }
        month++;
    }
    printf("The total sales for the first quarter of 2014 is %d.\n", total);

    // sum the number of sales for the second quarter of the year
    total = 0;
    quarter = 1;
    year = 2014;
    month = 1;
    while (month <= 12) {
        total += getMonthlySales(year);
        quarter++;
        if (quarter == 4) {
            quarter = 1;
            year++;
        }
        month++;
    }
    printf("The total sales for the second quarter of 2014 is %d.\n", total);
}
