#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    // this will be used to calculate the monthly sales for the next quarter
    int sales[12];
    sales[0] = getMonthlySales(1);
    sales[1] = getMonthlySales(2);
    sales[2] = getMonthlySales(3);
    sales[3] = getMonthlySales(4);
    sales[4] = getMonthlySales(5);
    sales[5] = getMonthlySales(6);
    sales[6] = getMonthlySales(7);
    sales[7] = getMonthlySales(8);
    sales[8] = getMonthlySales(9);
    sales[9] = getMonthlySales(10);
    sales[10] = getMonthlySales(11);
    // calculate the monthly sales for the next quarter
    sales[11] = getMonthlySales(12);

    // print the monthly sales
    for (int i = 0; i < 12; i++) {
        printf("%d\n", sales[i]);
    }

    return 0;
}
