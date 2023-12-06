#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales1 = getMonthlySales(1);
    int sales2 = getMonthlySales(2);
    int sales3 = getMonthlySales(3);
    int sales4 = getMonthlySales(4);
    int sales5 = getMonthlySales(5);
    int sales6 = getMonthlySales(6);
    int sales7 = getMonthlySales(7);
    int sales8 = getMonthlySales(8);
    int sales9 = getMonthlySales(9);
    int sales10 = getMonthlySales(10);

    // sum the number of sales for the second quarter of the year
    int sales11 = getMonthlySales(11);
    int sales12 = getMonthlySales(12);

    // sum the number of sales for the third quarter of the year
    int sales13 = getMonthlySales(13);
    int sales14 = getMonthlySales(14);
    int sales15 = getMonthlySales(15);
    int sales16 = getMonthlySales(16);
    int sales17 = getMonthlySales(17);
    int sales18 = getMonthlySales(18);
    int sales19 = getMonthlySales(19);
    int sales20 = getMonthlySales(20);
}
