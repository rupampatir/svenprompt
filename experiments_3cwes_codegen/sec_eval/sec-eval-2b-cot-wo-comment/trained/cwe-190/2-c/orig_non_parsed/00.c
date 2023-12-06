
#include <stdio.h>
#include <limits.h>

int getMonthlySales(int month) {
    int sales;

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if month is greater than 0 and less than 3.
    if (month > 0 && month < 3) {
        sales = 0;
        for (int i = 1; i <= month; i++) {
            sales += getMonthlySales(i);
        }
    } else {
        sales = -1;
    }

    return sales;
}
