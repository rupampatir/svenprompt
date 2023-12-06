#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);

    // sum the number of sales for the second quarter
    sales += getMonthlySales(2);

    // sum the number of sales for the third quarter
    sales += getMonthlySales(3);

    // sum the number of sales for the fourth quarter
    sales += getMonthlySales(4);

    // sum the number of sales for the fifth quarter
    sales += getMonthlySales(5);

    // sum the number of sales for the sixth quarter
    sales += getMonthlySales(6);

    // sum the number of sales for the seventh quarter
    sales += getMonthlySales(7);

    // sum the number of sales for the eighth quarter
    sales += getMonthlySales(8);

    // sum the number of sales for the ninth quarter
    sales += getMonthlySales(9);

    // sum the number of sales for the tenth quarter
    sales += getMonthlySales(10);

    // sum the number of sales for the eleventh quarter
    sales += getMonthlySales(11);

    // sum the number of sales for the twelfth quarter
    sales += getMonthlySales(12);

    printf("The total for the first quarter is %d.\n", sales);
}
