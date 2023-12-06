#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    sales[0] = 0;
    for (int i = 1; i < 12; i++) {
        sales[i] = sales[i-1] + getMonthlySales(i);
    }

    printf("The sales for the first quarter of the month are: %d\n", sales[0]);

    // sum the number of sales for the last quarter of the month
    sales[12] = 0;
    for (int i = 0; i < 12; i++) {
        sales[i] = sales[i] + getMonthlySales(i);
    }

    printf("The sales for the last quarter of the month are: %d\n", sales[12]);

    return 0;
}
