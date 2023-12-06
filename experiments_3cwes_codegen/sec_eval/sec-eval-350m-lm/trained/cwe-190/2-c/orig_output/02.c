#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    // get the number of sales for the first quarter of the month
    sales[0] = getMonthlySales(1);
    // get the number of sales for the last quarter of the month
    sales[11] = getMonthlySales(7);
    // sum the number of sales for the last quarter of the month
    sales[12] = sales[11] + sales[10];
    // print the number of sales for the last quarter of the month
    printf("%d\n", sales[12]);

    return 0;
}
