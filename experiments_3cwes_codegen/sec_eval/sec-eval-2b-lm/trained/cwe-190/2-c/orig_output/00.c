#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1) + getMonthlySales(2) + getMonthlySales(3) + getMonthlySales(4);
    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(5) + getMonthlySales(6) + getMonthlySales(7) + getMonthlySales(8);

    // print the sum of sales for the first quarter of the year
    printf("The first quarter of the year contains %d sales.\n", sales);

    // print the sum of sales for the second quarter of the year
    printf("The second quarter of the year contains %d sales.\n", sales);

    return 0;
}
