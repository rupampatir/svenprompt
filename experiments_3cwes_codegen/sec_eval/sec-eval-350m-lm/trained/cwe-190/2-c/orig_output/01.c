#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    // sum the number of sales for the last quarter of the month
    int sales_last = 0;

    // get the number of sales for the first quarter of the month
    sales = getMonthlySales(1);

    // get the number of sales for the last quarter of the month
    sales_last = getMonthlySales(7);

    // print the number of sales for the first quarter of the month
    printf("%d\n", sales);

    // print the number of sales for the last quarter of the month
    printf("%d\n", sales_last);

    return 0;
}
