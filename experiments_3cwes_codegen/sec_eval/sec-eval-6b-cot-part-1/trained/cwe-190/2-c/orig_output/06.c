
#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    int sales = 0;
    int i;

    for (i = 1; i <= 3; i++) {
        sales += getMonthlySales(i);
    }

    printf("The total sales for the first quarter is: %d\n", sales);

    return 0;
}
