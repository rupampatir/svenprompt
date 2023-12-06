#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarterSales = getMonthlySales(1) + getMonthlySales(3) + getMonthlySales(5);
    // sum the number of sales for the second quarter of the year
    int secondQuarterSales = getMonthlySales(2) + getMonthlySales(4) + getMonthlySales(6);
    // sum the number of sales for the third quarter of the year
    int thirdQuarterSales = getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7);
    // sum the number of sales for the fourth quarter of the year
    int fourthQuarterSales = getMonthlySales(4) + getMonthlySales(6) + getMonthlySales(8);

    printf("The first quarter of the year was %d dollars.\n", quarterSales);
    printf("The second quarter of the year was %d dollars.\n", secondQuarterSales);
    printf("The third quarter of the year was %d dollars.\n", thirdQuarterSales);
    printf("The fourth quarter of the year was %d dollars.\n", fourthQuarterSales);

    return 0;
}
