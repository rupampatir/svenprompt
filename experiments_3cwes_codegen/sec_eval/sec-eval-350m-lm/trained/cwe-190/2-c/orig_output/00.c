#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the month
    int sales2 = getMonthlySales(4);

    // sum the number of sales for the third quarter of the month
    int sales3 = getMonthlySales(6);

    // sum the number of sales for the fourth quarter of the month
    int sales4 = getMonthlySales(8);

    // sum the number of sales for the fifth quarter of the month
    int sales5 = getMonthlySales(10);

    // sum the number of sales for the sixth quarter of the month
    int sales6 = getMonthlySales(12);

    // sum the number of sales for the seventh quarter of the month
    int sales7 = getMonthlySales(14);

    // sum the number of sales for the eighth quarter of the month
    int sales8 = getMonthlySales(16);

    // sum the number of sales for the ninth quarter of the month
    int sales9 = getMonthlySales(18);

    // sum the number of sales for the tenth quarter of the month
    int sales10 = getMonthlySales(20);

    // sum the number of sales for the eleventh quarter of the month
    int sales11 = getMonthlySales(22);
}
