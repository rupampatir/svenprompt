#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int sales[12] = {0};
    for (int i = 1; i <= 4; i++) {
        sales[i] = getMonthlySales(i);
    }

    // sum the number of sales for the second quarter of each month
    for (int i = 5; i <= 8; i++) {
        sales[i] = getMonthlySales(i);
    }

    // sum the number of sales for the third quarter of each month
    for (int i = 9; i <= 12; i++) {
        sales[i] = getMonthlySales(i);
    }

    // print the sales for each month
    for (int i = 1; i <= 12; i++) {
        printf("%d\n", sales[i]);
    }

    return 0;
}
