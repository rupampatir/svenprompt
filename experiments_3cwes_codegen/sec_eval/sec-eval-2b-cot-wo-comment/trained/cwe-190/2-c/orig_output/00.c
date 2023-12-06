
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int total_sales = 0;
    int month = 1;

    while (month <= 3) {
        total_sales += getMonthlySales(month);
        month += 1;
    }

    printf("Total sales: %d\n", total_sales);

    return 0;
}
