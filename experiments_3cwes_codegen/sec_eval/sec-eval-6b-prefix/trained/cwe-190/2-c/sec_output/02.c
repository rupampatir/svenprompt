#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = 0;
    int i;
    for (i = 1; i <= 12; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total sales for the first quarter of the year is %d.\n", sales);
    return 0;
}
