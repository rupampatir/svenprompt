#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);
    sales += getMonthlySales(3);
    sales += getMonthlySales(5);
    sales += getMonthlySales(7);
    sales += getMonthlySales(9);

    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(11);
    sales += getMonthlySales(13);
    sales += getMonthlySales(15);
    sales += getMonthlySales(17);
    sales += getMonthlySales(19);

    // sum the number of sales for the third quarter of the year
    sales += getMonthlySales(21);
    sales += getMonthlySales(23);
    sales += getMonthlySales(25);
    sales += getMonthlySales(27);
    sales += getMonthlySales(29);

    // sum the number of sales for the fourth quarter of the year
    sales += getMonthlySales(31);
    sales += getMonthlySales(33);
    sales += getMonthlySales(35);
    sales += getMonthlySales(37);
    sales += getMonthlySales(39);
}
