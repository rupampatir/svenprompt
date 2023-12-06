#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    // and the second quarter of the year
    int sales1 = getMonthlySales(1);
    int sales2 = getMonthlySales(2);

    // sum the sales for the first quarter of the year
    // and the second quarter of the year
    int sales = sales1 + sales2;

    // print the sum of sales for the first quarter of the year
    // and the second quarter of the year
    printf("The sum of sales for the first quarter of the year and the second quarter of the year is %d\n", sales);

    return 0;
}
