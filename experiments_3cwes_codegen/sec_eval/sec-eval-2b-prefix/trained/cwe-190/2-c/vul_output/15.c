#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter = getMonthlySales(1) + getMonthlySales(3) + getMonthlySales(5);
    // sum the number of sales for the second quarter of the year
    int secondQuarter = getMonthlySales(2) + getMonthlySales(4) + getMonthlySales(6);
    // sum the number of sales for the third quarter of the year
    int thirdQuarter = getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7);
    // sum the number of sales for the fourth quarter of the year
    int fourthQuarter = getMonthlySales(4) + getMonthlySales(6) + getMonthlySales(8);
    // sum the number of sales for the fifth quarter of the year
    int fifthQuarter = getMonthlySales(5) + getMonthlySales(7) + getMonthlySales(9);
    // sum the number of sales for the sixth quarter of the year
    int sixthQuarter = getMonthlySales(6) + getMonthlySales(8) + getMonthlySales(10);
}
