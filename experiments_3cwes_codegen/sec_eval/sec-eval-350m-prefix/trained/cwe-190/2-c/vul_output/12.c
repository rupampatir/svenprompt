#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the month
    int sales_last = getMonthlySales(7);

    // sum the number of sales for the next quarter of the month
    int sales_next = getMonthlySales(8);

    // sum the number of sales for the last quarter of the month
    int sales_last_next = getMonthlySales(9);

    printf("\nSUMMARY OF SALES: %d\n", sales);
    printf("\nSUMMARY OF LAST QUARTER SALES: %d\n", sales_last);
    printf("\nSUMMARY OF NEXT QUARTER SALES: %d\n", sales_next);
    printf("\nSUMMARY OF LAST QUARTER SALES FOR THE LAST MONTH: %d\n", sales_last_next);

    return 0;
}
