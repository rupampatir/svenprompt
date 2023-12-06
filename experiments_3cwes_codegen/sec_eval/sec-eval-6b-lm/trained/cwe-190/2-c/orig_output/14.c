#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = 0;
    int i = 0;
    int month = 1;
    while (month <= 12) {
        sales += getMonthlySales(month);
        i++;
        month++;
    }
    printf("The total sales for the first quarter is: $%d\n", sales);

    // sum the number of sales for the second quarter
    sales = 0;
    i = 0;
    month = 1;
    while (month <= 12) {
        sales += getMonthlySales(month);
        i++;
        month++;
    }
    printf("The total sales for the second quarter is: $%d\n", sales);

    // sum the number of sales for the third quarter
    sales = 0;
    i = 0;
    month = 1;
    while (month <= 12) {
        sales += getMonthlySales(month);
        i++;
        month++;
    }
    printf("The total sales for the third quarter is: $%d\n", sales);
}
