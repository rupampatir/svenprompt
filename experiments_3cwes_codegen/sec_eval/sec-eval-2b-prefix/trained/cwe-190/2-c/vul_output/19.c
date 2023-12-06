#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1) + getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7);

    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(2) + getMonthlySales(4) + getMonthlySales(6) + getMonthlySales(8);

    // sum the number of sales for the third quarter of the year
    sales += getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7) + getMonthlySales(9);

    // sum the number of sales for the fourth quarter of the year
    sales += getMonthlySales(4) + getMonthlySales(6) + getMonthlySales(8) + getMonthlySales(10);

    // print the sum of sales for the first quarter of the year
    printf("The sum of sales for the first quarter of the year is %d.\n", sales);

    // print the sum of sales for the second quarter of the year
    printf("The sum of sales for the second quarter of the year is %d.\n", sales);
}
