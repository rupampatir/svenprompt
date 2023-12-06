#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);
    // sum the number of sales for the second quarter
    int sales2 = getMonthlySales(4);
    // sum the number of sales for the third quarter
    int sales3 = getMonthlySales(7);
    // sum the number of sales for the fourth quarter
    int sales4 = getMonthlySales(10);
    // sum the number of sales for the fifth quarter
    int sales5 = getMonthlySales(13);
    // sum the number of sales for the sixth quarter
    int sales6 = getMonthlySales(16);
    // sum the number of sales for the seventh quarter
    int sales7 = getMonthlySales(19);
    // sum the number of sales for the eighth quarter
    int sales8 = getMonthlySales(22);
    // sum the number of sales for the nineth quarter
    int sales9 = getMonthlySales(25);
    // sum the number of sales for the tenth quarter
    int sales10 = getMonthlySales(28);
    // sum the number of sales for the eleventh quarter
    int sales11 = getMonthlySales(31);
    // sum the number of sales for the twelfth quarter
    int sales12 = getMonthlySales(34);
}
