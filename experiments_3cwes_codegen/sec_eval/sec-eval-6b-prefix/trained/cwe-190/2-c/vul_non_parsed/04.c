#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = 0;
    int firstQuarter = 0;

    for (int i = 1; i <= 12; i++) {
        sales += getMonthlySales(i);
        if (i <= 3) {
            firstQuarter += getMonthlySales(i);
        }
    }

    printf("The first quarter sales are %d.\n", firstQuarter);
    printf("The total sales for the first quarter is %d.\n", sales);

    // sum the number of sales for the second quarter
    int secondQuarter = 0;
    sales = 0;

    for (int i = 1; i <= 12; i++) {
        sales += getMonthlySales(i);
        if (i >= 4 && i <= 6) {
            secondQuarter += getMonthlySales(i);
        }
    }

    printf("The second quarter sales are %d.\n", secondQuarter);
    printf("The total sales for the second quarter is %d.\n", sales);
}
