#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // print the sales for the current month
    printf("The sales for the current month is %i\n", sales);

    // print the sales for the previous month
    printf("The sales for the previous month is %i\n", sales - 1);

    // return 0 if the sales for the current month is less than the sales for the previous month
    return 0;
}
