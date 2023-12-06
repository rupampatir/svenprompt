
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int quarter = 1;
    int sales_per_month = getMonthlySales(quarter);
    int total_sales = sales_per_month * 3;
    printf("Total sales for first quarter: %d\n", total_sales);

    return 0;
}
