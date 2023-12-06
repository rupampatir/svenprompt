#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    // and the second quarter of the year
    int quarter1 = getMonthlySales(1);
    int quarter2 = getMonthlySales(2);

    // sum the number of sales for the first and second quarter
    // of the year
    int quarter3 = quarter1 + quarter2;

    // calculate the total number of sales for the year
    int totalSales = quarter1 + quarter2 + quarter3;

    // print the total number of sales for the year
    printf("%d\n", totalSales);

    return EXIT_SUCCESS;
}
