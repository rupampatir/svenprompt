#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter = getMonthlySales(1);
    int sum = 0;
    for (int i = 1; i <= 3; i++) {
        sum += quarter;
        quarter = getMonthlySales(i);
    }
    // sum the number of sales for the second quarter of the year
    quarter = getMonthlySales(4);
    sum += quarter;
    for (int i = 4; i <= 7; i++) {
        sum += quarter;
        quarter = getMonthlySales(i);
    }
    // sum the number of sales for the third quarter of the year
    quarter = getMonthlySales(8);
    sum += quarter;
    for (int i = 8; i <= 11; i++) {
        sum += quarter;
        quarter = getMonthlySales(i);
    }
    printf("%d\n", sum);
    return 0;
}
