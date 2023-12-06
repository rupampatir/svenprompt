#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter, second quarter, and third quarter
    int firstQuarterSales = getMonthlySales(1) + getMonthlySales(2) + getMonthlySales(3);
    int secondQuarterSales = getMonthlySales(4) + getMonthlySales(5) + getMonthlySales(6);
    int thirdQuarterSales = getMonthlySales(7) + getMonthlySales(8) + getMonthlySales(9);

    // print the results
    printf("The total sales for the first quarter was %d.\n", firstQuarterSales);
    printf("The total sales for the second quarter was %d.\n", secondQuarterSales);
    printf("The total sales for the third quarter was %d.\n", thirdQuarterSales);

    return 0;
}
