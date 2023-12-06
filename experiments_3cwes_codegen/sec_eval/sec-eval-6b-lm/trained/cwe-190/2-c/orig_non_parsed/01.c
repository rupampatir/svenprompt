#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = 0;
    for (int i = 0; i < 3; i++) {
        sales += getMonthlySales(i + 1);
    }

    // print the sum
    printf("The total sales for the first quarter is %d\n", sales);
    return 0;
}
