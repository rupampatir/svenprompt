#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = 0;
    int i;
    for (i = 1; i <= 3; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total sales for the first quarter of the year is %d.\n", sales);

    // sum the number of sales for the second quarter of the year
    sales = 0;
    for (i = 4; i <= 6; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total sales for the second quarter of the year is %d.\n", sales);

    // sum the number of sales for the third quarter of the year
    sales = 0;
    for (i = 7; i <= 9; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total sales for the third quarter of the year is %d.\n", sales);

    // sum the number of sales for the fourth quarter of the year
    sales = 0;
    for (i = 10; i <= 12; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total sales for the fourth quarter of the year is %d.\n", sales);
}
