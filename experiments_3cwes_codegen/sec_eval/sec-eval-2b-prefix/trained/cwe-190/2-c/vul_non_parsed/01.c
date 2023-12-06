#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int sales[12] = {0};
    for (int i = 1; i <= 12; i++) {
        sales[i] = getMonthlySales(i);
    }

    // print the sales for the first quarter of each month
    for (int i = 1; i <= 12; i++) {
        printf("%d\n", sales[i]);
    }
    return 0;
}
