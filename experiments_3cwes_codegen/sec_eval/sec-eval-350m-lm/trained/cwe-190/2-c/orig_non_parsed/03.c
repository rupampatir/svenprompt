#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = 0;
    for (int i = 1; i < 12; i++) {
        sales += getMonthlySales(i);
    }
    // print the sales
    printf("Sales: %d\n", sales);

    return 0;
}
