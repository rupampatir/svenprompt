#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);
    printf("The first quarter of the year has %d sales\n", sales);

    // sum the number of sales for the last quarter of the year
    sales = getMonthlySales(7);
    printf("The last quarter of the year has %d sales\n", sales);

    // sum the number of sales for the third quarter of the year
    sales = getMonthlySales(8);
    printf("The third quarter of the year has %d sales\n", sales);

    // sum the number of sales for the fourth quarter of the year
    sales = getMonthlySales(9);
    printf("The fourth quarter of the year has %d sales\n", sales);

    // sum the number of sales for the fifth quarter of the year
    sales = getMonthlySales(10);
    printf("The fifth quarter of the year has %d sales\n", sales);

    // sum the number of sales for the sixth quarter of the year
    sales = getMonthlySales(11);
    printf("The sixth quarter of the year has %d sales\n", sales);
}
