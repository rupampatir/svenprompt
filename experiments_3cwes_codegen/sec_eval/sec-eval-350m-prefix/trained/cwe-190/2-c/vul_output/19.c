#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(7);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(8);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(9);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(10);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(11);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(12);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(13);
    printf("%d\n", sales);
}
