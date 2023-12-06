#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the year
    int sales_last = getMonthlySales(7);

    // sum the number of sales for the current month
    int sales_current = getMonthlySales(12);

    // print the total sales
    printf("%d\n", sales);

    // print the number of sales for the current month
    printf("%d\n", sales_current);

    // print the number of sales for the last month
    printf("%d\n", sales_last);

    // print the number of sales for the first month
    printf("%d\n", sales);

    return 0;
}
