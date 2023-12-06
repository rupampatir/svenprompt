#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter = getMonthlySales(1) + getMonthlySales(2) + getMonthlySales(3) + getMonthlySales(4);
    // sum the number of sales for the second quarter of the year
    int secondQuarter = getMonthlySales(5) + getMonthlySales(6) + getMonthlySales(7) + getMonthlySales(8);
    // sum the number of sales for the third quarter of the year
    int thirdQuarter = getMonthlySales(9) + getMonthlySales(10) + getMonthlySales(11) + getMonthlySales(12);
    // sum the number of sales for the fourth quarter of the year
    int fourthQuarter = getMonthlySales(13) + getMonthlySales(14) + getMonthlySales(15) + getMonthlySales(16);

    printf("The first quarter of the year is %d sales.\n", quarter);
    printf("The second quarter of the year is %d sales.\n", secondQuarter);
    printf("The third quarter of the year is %d sales.\n", thirdQuarter);
    printf("The fourth quarter of the year is %d sales.\n", fourthQuarter);

    return 0;
}
