#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    int month = 1;
    while (month < 12) {
        sales += getMonthlySales(month);
        month++;
    }

    printf("%d\n", sales);
    return 0;
}
