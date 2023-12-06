#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sum = 0;
    int i = 1;
    while (i <= 4) {
        sum += getMonthlySales(i);
        i++;
    }
    printf("The total sales for the first quarter of the year is %d.\n", sum);
    return 0;
}
