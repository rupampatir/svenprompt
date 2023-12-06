#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int sales[12] = {0};

    for (int i = 1; i <= 3; i++) {
        sales[i - 1] = getMonthlySales(i);
    }

    for (int i = 4; i <= 10; i++) {
        sales[i - 1] = getMonthlySales(i);
    }

    for (int i = 11; i <= 12; i++) {
        sales[i - 1] = getMonthlySales(i);
    }

    // print the sum of sales for the first quarter of each month
    for (int i = 1; i <= 12; i++) {
        printf("%3d: %d\n", i, sales[i - 1]);
    }

    return 0;
}
