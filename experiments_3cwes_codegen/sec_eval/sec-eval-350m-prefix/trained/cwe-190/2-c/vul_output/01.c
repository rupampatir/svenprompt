#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter
    int salesLast = getMonthlySales(7);

    printf("%d\n", sales);
    printf("%d\n", salesLast);

    return 0;
}
