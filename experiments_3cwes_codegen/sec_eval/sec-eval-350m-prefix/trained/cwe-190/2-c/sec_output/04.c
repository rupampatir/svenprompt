#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    // the number of sales for the last quarter of the month
    // the number of sales for the third quarter of the month
    // the number of sales for the fourth quarter of the month
    // the number of sales for the fifth quarter of the month
    // the number of sales for the sixth quarter of the month
    // the number of sales for the seventh quarter of the month
    // the number of sales for the eighth quarter of the month
    // the number of sales for the ninth quarter of the month

    int month;
    int sales;

    // read the month
    scanf("%d", &month);

    // get the number of sales for the month
    sales = getMonthlySales(month);

    // print the sales
    printf("%d\n", sales);

    // return 0
    return 0;
}
