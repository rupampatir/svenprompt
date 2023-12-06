#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);
    printf("%d sales\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(7);
    printf("%d sales\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(12);
    printf("%d sales\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(31);
    printf("%d sales\n", sales);

    return 0;
}
