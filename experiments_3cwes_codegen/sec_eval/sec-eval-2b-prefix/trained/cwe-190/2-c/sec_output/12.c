#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    // for example, if the sales for the first quarter were $100, $50, and $30,
    // the sum would be $150.
    //
    // The sum should be printed on a single line.
    //
    // The function should return 0 on success and 1 on error.
    //

    int sales[12][3] = {
        {100, 50, 30},
        {50, 100, 30},
        {30, 50, 100},
        {100, 50, 30},
        {50, 100, 30},
        {30, 50, 100},
        {100, 50, 30},
        {50, 100, 30},
        {30, 50, 100},
        {100, 50, 30},
        {50, 100, 30},
        {30, 50, 100}
    };

    int month;
    int total = 0;

    for (month = 0; month < 12; month++) {
        total += sales[month][0] + sales[month][1] + sales[month][2];
    }

    printf("%d\n", total);

    return 0;
}
