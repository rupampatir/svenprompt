#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);

    // sum the number of sales for the last quarter
    int sales_last = getMonthlySales(7);

    printf("The sales for the first quarter are %d and the last sales for the last quarter is %d\n", sales, sales_last);

    return 0;
}
