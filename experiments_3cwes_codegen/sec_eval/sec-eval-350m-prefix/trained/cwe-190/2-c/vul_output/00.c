#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter of the month
    int sales2 = getMonthlySales(7);

    printf("The sales for the first quarter of the month are %d\n", sales);
    printf("The sales for the last quarter of the month are %d\n", sales2);

    return 0;
}
