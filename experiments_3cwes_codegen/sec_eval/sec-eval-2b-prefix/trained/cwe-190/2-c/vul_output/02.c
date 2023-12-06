#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1) + getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7);

    // print the total sales for the year
    printf("%d\n", sales);

    return 0;
}
