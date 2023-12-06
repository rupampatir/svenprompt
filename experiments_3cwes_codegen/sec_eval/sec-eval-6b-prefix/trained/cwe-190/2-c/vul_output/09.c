#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int total = 0;
    int month = 1;

    while (month <= 4) {
        total += getMonthlySales(month);
        month++;
    }

    printf("%d\n", total);

    return 0;
}
