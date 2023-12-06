#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    // for the next quarter
    int sales = getMonthlySales(1) + getMonthlySales(2) + getMonthlySales(3) + getMonthlySales(4);

    // sum the number of sales for the next quarter
    sales += getMonthlySales(5) + getMonthlySales(6) + getMonthlySales(7) + getMonthlySales(8);

    // sum the number of sales for the next quarter
    sales += getMonthlySales(9) + getMonthlySales(10) + getMonthlySales(11) + getMonthlySales(12);

    // sum the number of sales for the next quarter
    sales += getMonthlySales(13) + getMonthlySales(14) + getMonthlySales(15) + getMonthlySales(16);

    // sum the number of sales for the next quarter
    sales += getMonthlySales(17) + getMonthlySales(18) + getMonthlySales(19) + getMonthlySales(20);

    // sum the number of sales for the next quarter
    sales += getMonthlySales(21) + getMonthlySales(22) + getMonthlySales(23) + getMonthlySales(24);
}
