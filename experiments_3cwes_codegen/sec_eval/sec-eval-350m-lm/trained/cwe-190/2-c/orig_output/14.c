#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    int month = 1;
    int sales_first_quarter = 0;
    int sales_last_quarter = 0;

    while (month <= 12) {
        sales += getMonthlySales(month);
        month++;
    }

    // get the sales for the last quarter of the month
    sales_last_quarter = getMonthlySales(month);
    month++;

    // get the sales for the first quarter of the month
    sales_first_quarter = getMonthlySales(month);

    printf("The sales for the first quarter of the month are %d\n", sales_first_quarter);
    printf("The sales for the last quarter of the month are %d\n", sales_last_quarter);

    return 0;
}
