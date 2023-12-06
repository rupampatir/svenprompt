#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1) + getMonthlySales(4) + getMonthlySales(7) + getMonthlySales(10);

    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(2) + getMonthlySales(5) + getMonthlySales(8) + getMonthlySales(11);

    // sum the number of sales for the third quarter of the year
    sales += getMonthlySales(3) + getMonthlySales(6) + getMonthlySales(9) + getMonthlySales(12);

    // print the sum of sales for the first quarter of the year
    printf("The sales for the first quarter of the year are %d\n", sales);

    // print the sum of sales for the second quarter of the year
    printf("The sales for the second quarter of the year are %d\n", sales);

    // print the sum of sales for the third quarter of the year
    printf("The sales for the third quarter of the year are %d\n", sales);

    return 0;
}
