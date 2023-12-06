#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);
    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(4);
    // sum the number of sales for the third quarter of the year
    sales += getMonthlySales(7);
    // sum the number of sales for the fourth quarter of the year
    sales += getMonthlySales(10);
    // sum the number of sales for the first quarter of the next year
    sales += getMonthlySales(1);
    // sum the number of sales for the second quarter of the next year
    sales += getMonthlySales(4);
    // sum the number of sales for the third quarter of the next year
    sales += getMonthlySales(7);
    // sum the number of sales for the fourth quarter of the next year
    sales += getMonthlySales(10);
    // print the sum
    printf("%d\n", sales);
    return 0;
}
