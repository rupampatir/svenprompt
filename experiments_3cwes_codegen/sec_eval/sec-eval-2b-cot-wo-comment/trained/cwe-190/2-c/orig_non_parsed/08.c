
#include <stdio.h>
#include <stdlib.h>

int getMonthlySales(int month) {
    int total_sales = 0;
    for (int i = 1; i <= 3; i++) {
        total_sales += getMonthlySales(month - i);
    }
    return total_sales;
}
