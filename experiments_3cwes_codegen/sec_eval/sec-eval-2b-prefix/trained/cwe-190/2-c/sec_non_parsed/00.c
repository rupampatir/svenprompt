#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    // and the number of sales for the second quarter
    int sales[3][12] = {0};
    for (int i = 0; i < 12; i++) {
        sales[0][i] = getMonthlySales(i);
    }
    for (int j = 1; j < 3; j++) {
        for (int i = 0; i < 12; i++) {
            sales[j][i] = sales[j - 1][i];
        }
    }

    // sum the number of sales for the third quarter of each month
    // and the number of sales for the fourth quarter
    int sales2[3][12] = {0};
    for (int i = 0; i < 12; i++) {
        sales2[0][i] = getMonthlySales(i);
    }
    for (int j = 1; j < 3; j++) {
        for (int i = 0; i < 12; i++) {
            sales2[j][i] = sales2[j - 1][i];
        }
    }

    // print the sum of sales for the first quarter of each month
}
