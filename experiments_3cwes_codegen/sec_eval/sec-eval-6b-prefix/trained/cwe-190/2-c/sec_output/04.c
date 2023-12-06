#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sum = 0;
    int i;
    for (i = 1; i <= 12; i++) {
        sum += getMonthlySales(i);
    }
    printf("The total sales for the first quarter of the year is %d.\n", sum);
    return 0;
}
