#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);
    printf("%d\n", sales);

    // sum the number of sales for the last quarter
    sales = getMonthlySales(4);
    printf("%d\n", sales);

    // sum the number of sales for the third quarter
    sales = getMonthlySales(3);
    printf("%d\n", sales);

    // sum the number of sales for the fourth quarter
    sales = getMonthlySales(2);
    printf("%d\n", sales);

    // sum the number of sales for the fifth quarter
    sales = getMonthlySales(5);
    printf("%d\n", sales);

    return 0;
}
