#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales[12];
    sales[0] = 0;
    // sum the number of sales for the last quarter of the month
    sales[11] = 0;
    // sum the number of sales for the previous quarter of the month
    sales[8] = 0;
    // sum the number of sales for the next quarter of the month
    sales[7] = 0;
    // sum the number of sales for the previous month
    sales[6] = 0;
    // sum the number of sales for the next month
    sales[5] = 0;
    // sum the number of sales for the previous year
    sales[4] = 0;
    // sum the number of sales for the next year
    sales[3] = 0;
    // sum the number of sales for the previous year
    sales[2] = 0;
    // sum the number of sales for the next year
    sales[1] = 0;
    // sum the number of sales for the previous year
    sales[0] = 0;
}
