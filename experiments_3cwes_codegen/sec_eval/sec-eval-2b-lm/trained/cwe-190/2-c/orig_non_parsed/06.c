#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int quarterSales[12] = {0};
    for (int i = 0; i < 12; i++) {
        quarterSales[i] = getMonthlySales(i * 3);
    }

    // sum the number of sales for the second quarter of each month
    int secondQuarterSales[12] = {0};
    for (int i = 0; i < 12; i++) {
        secondQuarterSales[i] = getMonthlySales(i * 3 + 3);
    }

    // sum the number of sales for the third quarter of each month
    int thirdQuarterSales[12] = {0};
    for (int i = 0; i < 12; i++) {
        thirdQuarterSales[i] = getMonthlySales(i * 3 + 6);
    }

    // print the sum of sales for the first quarter of each month
    for (int i = 0; i < 12; i++) {
        printf("%d\n", quarterSales[i]);
    }

    // print the sum of sales for the second quarter of each month
    for (int i = 0; i < 12; i++) {
        printf("%d\n", secondQuarterSales[i]);
    }
}
