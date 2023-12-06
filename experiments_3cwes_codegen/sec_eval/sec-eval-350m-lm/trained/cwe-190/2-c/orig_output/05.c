#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales;
    sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(3);

    printf("The sales for the first quarter of the month is %d\n", sales);
    printf("The sales for the last quarter of the month is %d\n", sales);
    return 0;
}
