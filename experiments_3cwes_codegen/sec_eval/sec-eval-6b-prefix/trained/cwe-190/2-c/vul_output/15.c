#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int total = 0;
    int sales = 0;
    int month = 1;
    while (month <= 4) {
        sales = getMonthlySales(month);
        total += sales;
        month++;
    }

    // print the total sales for the first quarter
    printf("The total sales for the first quarter is %d.\n", total);

    // sum the number of sales for the second quarter
    total = 0;
    month = 5;
    while (month <= 9) {
        sales = getMonthlySales(month);
        total += sales;
        month++;
    }

    // print the total sales for the second quarter
    printf("The total sales for the second quarter is %d.\n", total);

    // sum the number of sales for the third quarter
    total = 0;
    month = 10;
    while (month <= 13) {
        sales = getMonthlySales(month);
        total += sales;
        month++;
    }

    // print the total sales for the third quarter
    printf("The total sales for the third quarter is %d.\n", total);
}
