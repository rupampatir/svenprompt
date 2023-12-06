#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    // for the last quarter of the year
    int sum = 0;
    for (int i = 1; i <= 3; i++) {
        sum += getMonthlySales(i);
    }
    sum += getMonthlySales(4);
    sum += getMonthlySales(5);
    sum += getMonthlySales(6);
    sum += getMonthlySales(7);
    sum += getMonthlySales(8);
    sum += getMonthlySales(9);
    sum += getMonthlySales(10);
    sum += getMonthlySales(11);
    sum += getMonthlySales(12);

    printf("The sum of sales for the last quarter of the year is %d\n", sum);
    return 0;
}
