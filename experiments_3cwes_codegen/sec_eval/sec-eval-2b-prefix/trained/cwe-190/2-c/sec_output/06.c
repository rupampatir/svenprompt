#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    // for example, if the sales are [10, 20, 15, 25] for the first quarter,
    // the sum is [10+20+15+25].
    //
    // The total sales for the entire year is the sum of the first quarter
    // plus the sum of the second quarter plus the sum of the third quarter
    // plus the sum of the fourth quarter.

    int sales[12];
    int i;
    for (i = 0; i < 12; i++) {
        sales[i] = getMonthlySales(i);
    }

    int sum = 0;
    for (i = 0; i < 3; i++) {
        sum += sales[i];
    }
    for (i = 3; i < 6; i++) {
        sum += sales[i];
    }
    for (i = 6; i < 9; i++) {
        sum += sales[i];
    }
    for (i = 9; i < 12; i++) {
        sum += sales[i];
    }

    printf("%.2f\n", (float) sum / 12.0);

    return EXIT_SUCCESS;
}
