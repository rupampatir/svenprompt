
#include <stdio.h>
#include <limits.h>

int getMonthlySales(int month) {
    int sales = 0;
    if (month < 3) {
        sales = sales + getMonthlySales(month);
    }
    return sales;
}
