#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
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

    // print the sales for the last quarter of the month
    printf("The sales for the last quarter of the month are: %d\n", sales[11]);

    // print the sales for the first quarter of the month
    printf("The sales for the first quarter of the month are: %d\n", sales[0]);

    // print the sales for the second quarter of the month
    printf("The sales for the second quarter of the month are: %d\n", sales[1]);
}
