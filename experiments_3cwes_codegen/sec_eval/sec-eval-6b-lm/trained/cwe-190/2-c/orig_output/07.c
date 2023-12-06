#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int total = 0;
    int month = 1;
    int year = 2015;
    while (month <= 12) {
        total += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the first quarter of the year is %d.\n", total);
    return 0;
}
