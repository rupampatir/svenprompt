#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int sales[12][4] = {0};
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            sales[i][j] = getMonthlySales(i);
        }
    }

    // sum the number of sales for the second quarter of each month
    int sales2[12][4] = {0};
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            sales2[i][j] = getMonthlySales(i + 3);
        }
    }

    // sum the number of sales for the third quarter of each month
    int sales3[12][4] = {0};
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            sales3[i][j] = getMonthlySales(i + 6);
        }
    }
}
