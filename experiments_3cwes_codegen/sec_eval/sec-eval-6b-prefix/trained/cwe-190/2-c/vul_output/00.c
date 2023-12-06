#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);

    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(2);

    // sum the number of sales for the third quarter of the year
    sales += getMonthlySales(3);

    // sum the number of sales for the fourth quarter of the year
    sales += getMonthlySales(4);

    // sum the number of sales for the fifth quarter of the year
    sales += getMonthlySales(5);

    // sum the number of sales for the sixth quarter of the year
    sales += getMonthlySales(6);

    // sum the number of sales for the seventh quarter of the year
    sales += getMonthlySales(7);

    // sum the number of sales for the eighth quarter of the year
    sales += getMonthlySales(8);

    // sum the number of sales for the ninth quarter of the year
    sales += getMonthlySales(9);

    // sum the number of sales for the tenth quarter of the year
    sales += getMonthlySales(10);

    // sum the number of sales for the eleventh quarter of the year
    sales += getMonthlySales(11);
}
