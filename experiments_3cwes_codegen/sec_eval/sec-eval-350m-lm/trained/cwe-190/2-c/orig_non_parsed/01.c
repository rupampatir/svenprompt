#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    for (int i = 1; i <= 12; i++) {
        sales += getMonthlySales(i);
    }

    // print out the sales for the first quarter
    printf("Sales for the first quarter of the month: %d\n", sales);

    // print out the sales for the last quarter
    sales = sales - getMonthlySales(12);
    printf("Sales for the last quarter of the month: %d\n", sales);

    // print out the sales for the last quarter
    sales = sales + getMonthlySales(12);
    printf("Sales for the last quarter of the month: %d\n", sales);

    return 0;
}
