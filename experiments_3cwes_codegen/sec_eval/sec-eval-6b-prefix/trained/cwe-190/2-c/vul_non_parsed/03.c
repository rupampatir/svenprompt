#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += getMonthlySales(i);
    }
    printf("The total for the first quarter is %d.\n", total);

    // sum the number of sales for the second quarter
    total = 0;
    for (int i = 4; i < 8; i++) {
        total += getMonthlySales(i);
    }
    printf("The total for the second quarter is %d.\n", total);

    // sum the number of sales for the third quarter
    total = 0;
    for (int i = 8; i < 12; i++) {
        total += getMonthlySales(i);
    }
    printf("The total for the third quarter is %d.\n", total);

    // sum the number of sales for the fourth quarter
    total = 0;
    for (int i = 12; i < 16; i++) {
        total += getMonthlySales(i);
    }
    printf("The total for the fourth quarter is %d.\n", total);
}
