#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1) + getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7) + getMonthlySales(8) + getMonthlySales(10) + getMonthlySales(12);
    printf("The total sales for the first quarter are %d\n", sales);

    // sum the number of sales for the second quarter
    sales = getMonthlySales(2) + getMonthlySales(4) + getMonthlySales(6) + getMonthlySales(9) + getMonthlySales(11) + getMonthlySales(14);
    printf("The total sales for the second quarter are %d\n", sales);

    // sum the number of sales for the third quarter
    sales = getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7) + getMonthlySales(10) + getMonthlySales(12) + getMonthlySales(15);
    printf("The total sales for the third quarter are %d\n", sales);
}
