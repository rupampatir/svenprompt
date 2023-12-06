#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter, second quarter, and third quarter
    int firstQuarter = getMonthlySales(1);
    int secondQuarter = getMonthlySales(2);
    int thirdQuarter = getMonthlySales(3);

    printf("The first quarter sales are %d.\n", firstQuarter);
    printf("The second quarter sales are %d.\n", secondQuarter);
    printf("The third quarter sales are %d.\n", thirdQuarter);

    // sum the number of sales for the first, second, and third quarters
    int total = firstQuarter + secondQuarter + thirdQuarter;

    printf("The total sales are %d.\n", total);

    return 0;
}
