#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the month
    int sales_last = getMonthlySales(7);

    printf("%d\n", sales + sales_last);

    return 0;
}
