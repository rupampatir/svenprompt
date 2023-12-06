
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int quarter = 1;
    int sales_for_quarter = getMonthlySales(quarter);
    int total_sales = 0;

    // Think Process:
    // Loop through the number of months, summing the sales for each quarter
    // and check for integer overflow (CWE-190).
    while (quarter < 4) {
        total_sales += sales_for_quarter;
        quarter++;
    }

    // Print the total sales for the first quarter
    printf("Total sales for the first quarter: %d\n", total_sales);

    return 0;
}
