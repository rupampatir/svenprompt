#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);
    printf("The sum of sales for the first quarter of the month is %d\n", sales);

    // sum the number of sales for the last quarter of the month
    sales = getMonthlySales(7);
    printf("The sum of sales for the last quarter of the month is %d\n", sales);

    // sum the number of sales for the third quarter of the month
    sales = getMonthlySales(8);
    printf("The sum of sales for the third quarter of the month is %d\n", sales);

    // sum the number of sales for the fourth quarter of the month
    sales = getMonthlySales(9);
    printf("The sum of sales for the fourth quarter of the month is %d\n", sales);

    // sum the number of sales for the fifth quarter of the month
    sales = getMonthlySales(10);
    printf("The sum of sales for the fifth quarter of the month is %d\n", sales);

    // sum the number of sales for the sixth quarter of the month
    sales = getMonthlySales(11);
    printf("The sum of sales for the sixth quarter of the month is %d\n", sales);
}
