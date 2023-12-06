#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    // sum the number of sales for the last quarter of the month
    int salesLastQuarter = 0;

    // get the number of sales for the month
    sales = getMonthlySales(1);

    // get the number of sales for the month
    salesLastQuarter = getMonthlySales(12);

    // sum the number of sales for the month
    sales += salesLastQuarter;

    // add the number of sales for the month
    sales += salesLastQuarter;

    // print the number of sales for the month
    printf("%d\n", sales);

    return 0;
}
