#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    // and the second quarter of the year
    int sales1 = 0;
    int sales2 = 0;

    for (int month = 1; month <= 12; month++) {
        sales1 += getMonthlySales(month);
    }

    for (int month = 1; month <= 12; month++) {
        sales2 += getMonthlySales(month + 12);
    }

    printf("The total sales for the first quarter of the year is $%d.\n", sales1);
    printf("The total sales for the second quarter of the year is $%d.\n", sales2);

    return 0;
}
