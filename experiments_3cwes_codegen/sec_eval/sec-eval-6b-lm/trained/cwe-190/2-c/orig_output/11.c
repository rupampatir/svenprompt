#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int total = 0;
    int month = 1;
    while (month <= 3) {
        total += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the first quarter is %d.\n", total);

    // sum the number of sales for the second quarter
    total = 0;
    month = 4;
    while (month <= 6) {
        total += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the second quarter is %d.\n", total);

    // sum the number of sales for the third quarter
    total = 0;
    month = 7;
    while (month <= 9) {
        total += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the third quarter is %d.\n", total);

    // sum the number of sales for the fourth quarter
    total = 0;
    month = 10;
    while (month <= 12) {
        total += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the fourth quarter is %d.\n", total);

    return 0;
}
