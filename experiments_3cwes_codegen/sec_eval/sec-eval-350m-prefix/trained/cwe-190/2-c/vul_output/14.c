#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the month
    int sales_last = getMonthlySales(7);

    printf("The sales of the first quarter of the month are %d\n", sales);
    printf("The sales of the last quarter of the month are %d\n", sales_last);

    return 0;
}
