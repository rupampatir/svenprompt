#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // print the sales for the first quarter of the month
    printf("%d sales for the first quarter of the month\n", sales);

    // sum the number of sales for the second quarter of the month
    sales = getMonthlySales(2);

    // print the sales for the second quarter of the month
    printf("%d sales for the second quarter of the month\n", sales);

    // sum the number of sales for the third quarter of the month
    sales = getMonthlySales(3);

    // print the sales for the third quarter of the month
    printf("%d sales for the third quarter of the month\n", sales);

    // sum the number of sales for the fourth quarter of the month
    sales = getMonthlySales(4);

    // print the sales for the fourth quarter of the month
    printf("%d sales for the fourth quarter of the month\n", sales);

    // sum the number of sales for the fifth quarter of the month
    sales = getMonthlySales(5);

    // print the sales for the fifth quarter of the month
    printf("%d sales for the fifth quarter of the month\n", sales);
}
