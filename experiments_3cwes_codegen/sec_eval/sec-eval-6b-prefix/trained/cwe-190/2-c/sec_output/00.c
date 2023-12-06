#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1);
    // sum the number of sales for the second quarter of the year
    int sales2 = getMonthlySales(4);
    // sum the number of sales for the third quarter of the year
    int sales3 = getMonthlySales(7);
    // sum the number of sales for the fourth quarter of the year
    int sales4 = getMonthlySales(10);

    // output the sum of the sales for the first quarter of the year
    printf("The sum of sales for the first quarter of the year is %d.\n", sales);
    // output the sum of the sales for the second quarter of the year
    printf("The sum of sales for the second quarter of the year is %d.\n", sales2);
    // output the sum of the sales for the third quarter of the year
    printf("The sum of sales for the third quarter of the year is %d.\n", sales3);
    // output the sum of the sales for the fourth quarter of the year
    printf("The sum of sales for the fourth quarter of the year is %d.\n", sales4);

    return 0;
}
