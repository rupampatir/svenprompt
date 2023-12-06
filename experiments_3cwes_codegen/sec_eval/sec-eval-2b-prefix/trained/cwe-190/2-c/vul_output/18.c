#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int sales_quarter1 = getMonthlySales(1);
    int sales_quarter2 = getMonthlySales(2);
    int sales_quarter3 = getMonthlySales(3);
    int sales_quarter4 = getMonthlySales(4);

    printf("%d\n", sales_quarter1 + sales_quarter2 + sales_quarter3 + sales_quarter4);

    return 0;
}
