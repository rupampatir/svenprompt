#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int totalSales = 0;
    int month = 0;
    int sales[4];
    // initialize sales array
    for (int i = 0; i < 4; i++) {
        sales[i] = 0;
    }
    // get the month
    scanf("%d", &month);
    // get the number of sales for the month
    getMonthlySales(month);
    // loop through the sales array
    for (int i = 0; i < 4; i++) {
        // get the number of sales
        sales[i] = getMonthlySales(month);
        // add the number of sales to the total
        totalSales += sales[i];
        // increment the month
        month++;
    }
    // print the total sales
    printf("%d\n", totalSales);
    return 0;
}
