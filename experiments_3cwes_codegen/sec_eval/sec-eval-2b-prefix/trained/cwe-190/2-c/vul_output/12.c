#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1) + getMonthlySales(2) + getMonthlySales(3) + getMonthlySales(4);

    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(5) + getMonthlySales(6) + getMonthlySales(7) + getMonthlySales(8);

    // sum the number of sales for the third quarter of the year
    sales += getMonthlySales(9) + getMonthlySales(10) + getMonthlySales(11) + getMonthlySales(12);

    // print the total sales for the year
    printf("Total sales for the year: %d\n", sales);

    return 0;
}
