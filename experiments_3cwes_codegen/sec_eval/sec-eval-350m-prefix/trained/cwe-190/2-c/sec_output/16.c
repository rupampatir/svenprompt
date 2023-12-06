#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    // and print the result
    int month = 1;
    int totalSales = 0;
    while (month <= 31) {
        totalSales += getMonthlySales(month);
        month++;
    }
    printf("%d\n", totalSales);
    return 0;
}
