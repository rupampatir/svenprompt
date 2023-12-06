#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);
    printf("%d\n", sales);

    // sum the number of sales for the next quarter of the year
    sales = getMonthlySales(2);
    printf("%d\n", sales);

    // sum the number of sales for the third quarter of the year
    sales = getMonthlySales(3);
    printf("%d\n", sales);

    // sum the number of sales for the fourth quarter of the year
    sales = getMonthlySales(4);
    printf("%d\n", sales);

    // sum the number of sales for the fifth quarter of the year
    sales = getMonthlySales(5);
    printf("%d\n", sales);

    // sum the number of sales for the sixth quarter of the year
    sales = getMonthlySales(6);
    printf("%d\n", sales);

    // sum the number of sales for the seventh quarter of the year
    sales = getMonthlySales(7);
    printf("%d\n", sales);

    // sum the number of sales for the eighth quarter of the year
    sales = getMonthlySales(8);
    printf("%d\n", sales);
}
