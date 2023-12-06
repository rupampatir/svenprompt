#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales[4];
    sales[0] = getMonthlySales(1);
    sales[1] = getMonthlySales(2);
    sales[2] = getMonthlySales(3);
    sales[3] = getMonthlySales(4);

    printf("%d\n", sales[0]);
    printf("%d\n", sales[1]);
    printf("%d\n", sales[2]);
    printf("%d\n", sales[3]);

    return 0;
}
