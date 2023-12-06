#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the month
    int sales2 = getMonthlySales(4);

    // sum the number of sales for the last quarter of the month
    int sales3 = getMonthlySales(5);

    printf("The sum of sales for the first quarter of the month is %d\n", sales);
    printf("The sum of sales for the last quarter of the month is %d\n", sales2);
    printf("The sum of sales for the last quarter of the month is %d\n", sales3);

    return 0;
}
