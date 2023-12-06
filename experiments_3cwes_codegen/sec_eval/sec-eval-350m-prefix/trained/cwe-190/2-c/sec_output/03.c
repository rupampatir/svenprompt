#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales;
    // get the number of sales for the month
    sales = getMonthlySales(1);
    // print the number of sales for the month
    printf("%d\n", sales);
    // return 0
    return 0;
}
