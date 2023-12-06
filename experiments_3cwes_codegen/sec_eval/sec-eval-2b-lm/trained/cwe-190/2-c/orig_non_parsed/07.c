#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each year
    int sales[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 1; i <= 12; i++) {
        sales[i-1] = getMonthlySales(i);
    }

    // print the result
    for (int i = 0; i < 12; i++) {
        printf("%d %d\n", i+1, sales[i]);
    }
    return 0;
}
