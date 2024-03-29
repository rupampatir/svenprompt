#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sales[i] = 0;
        sum += getMonthlySales(i);
    }

    for (int i = 0; i < 12; i++) {
        sales[i] += sum;
    }

    printf("%d\n", sales[0]);
    return 0;
}
