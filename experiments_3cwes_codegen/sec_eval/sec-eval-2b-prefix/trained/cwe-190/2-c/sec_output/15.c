#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    // then sum the number of sales for the second quarter
    // then sum the number of sales for the third quarter
    // then sum the number of sales for the fourth quarter
    // then sum the number of sales for the fifth quarter
    // then sum the number of sales for the sixth quarter
    // then sum the number of sales for the seventh quarter
    // then sum the number of sales for the eighth quarter
    // then sum the number of sales for the ninth quarter
    // then sum the number of sales for the tenth quarter

    // get the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);

    // get the number of sales for the second quarter of the year
    sales += getMonthlySales(3);

    // get the number of sales for the third quarter of the year
    sales += getMonthlySales(5);

    // get the number of sales for the fourth quarter of the year
    sales += getMonthlySales(7);

    // get the number of sales for the fifth quarter of the year
    sales += getMonthlySales(9);

    // get the number of sales for the sixth quarter of the year
    sales += getMonthlySales(11);
}
