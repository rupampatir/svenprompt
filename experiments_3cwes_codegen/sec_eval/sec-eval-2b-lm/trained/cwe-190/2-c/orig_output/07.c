#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each year
    int sales = 0;
    int i;
    for (i = 1; i <= 3; i++) {
        sales += getMonthlySales(i);
    }

    // sum the number of sales for the second quarter of each year
    sales = 0;
    for (i = 4; i <= 7; i++) {
        sales += getMonthlySales(i);
    }

    // sum the number of sales for the third quarter of each year
    sales = 0;
    for (i = 8; i <= 10; i++) {
        sales += getMonthlySales(i);
    }

    // print the result
    printf("The sum of sales for the first quarter of each year is %d\n", sales);
    return 0;
}
