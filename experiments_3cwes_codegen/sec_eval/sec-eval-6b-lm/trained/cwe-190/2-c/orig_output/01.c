#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = 0;
    int month = 1;
    int quarter = 1;
    int year = 2014;

    while (month <= 12) {
        sales += getMonthlySales(month);
        month++;
    }

    // print the sum
    printf("The total sales for the first quarter was $%d\n", sales);

    return 0;
}
