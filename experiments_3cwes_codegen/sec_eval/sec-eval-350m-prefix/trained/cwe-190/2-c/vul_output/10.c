#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    sales[0] = getMonthlySales(1);

    // sum the number of sales for the second quarter of the month
    sales[1] = getMonthlySales(2);

    // sum the number of sales for the third quarter of the month
    sales[2] = getMonthlySales(3);

    // sum the number of sales for the fourth quarter of the month
    sales[3] = getMonthlySales(4);

    // sum the number of sales for the fifth quarter of the month
    sales[5] = getMonthlySales(5);

    // sum the number of sales for the sixth quarter of the month
    sales[6] = getMonthlySales(6);

    // sum the number of sales for the seventh quarter of the month
    sales[7] = getMonthlySales(7);

    // sum the number of sales for the eighth quarter of the month
    sales[8] = getMonthlySales(8);

    // sum the number of sales for the ninth quarter of the month
    sales[9] = getMonthlySales(9);

    // sum the number of sales for the tenth quarter of the month
    sales[10] = getMonthlySales(10);
}
