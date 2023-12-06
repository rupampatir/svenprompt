#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter1 = getMonthlySales(1);
    int quarter2 = getMonthlySales(2);
    int quarter3 = getMonthlySales(3);
    int quarter4 = getMonthlySales(4);

    int sum = quarter1 + quarter2 + quarter3 + quarter4;

    // print the sum
    printf("%d\n", sum);

    return 0;
}
