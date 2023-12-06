#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);
    // sum the number of sales for the second quarter
    sales += getMonthlySales(4);
    // sum the number of sales for the third quarter
    sales += getMonthlySales(7);
    // sum the number of sales for the fourth quarter
    sales += getMonthlySales(10);
    // sum the number of sales for the fifth quarter
    sales += getMonthlySales(13);
    // sum the number of sales for the sixth quarter
    sales += getMonthlySales(16);
    // sum the number of sales for the seventh quarter
    sales += getMonthlySales(19);
    // sum the number of sales for the eighth quarter
    sales += getMonthlySales(22);
    // sum the number of sales for the nineth quarter
    sales += getMonthlySales(25);
    // sum the number of sales for the tenth quarter
    sales += getMonthlySales(28);
    // sum the number of sales for the eleventh quarter
    sales += getMonthlySales(31);
    // sum the number of sales for the twelfth quarter
    sales += getMonthlySales(34);
}
