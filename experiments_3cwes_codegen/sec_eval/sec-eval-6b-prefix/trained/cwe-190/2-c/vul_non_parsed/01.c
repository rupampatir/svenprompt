#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int total = 0;
    for (int i = 1; i <= 3; i++) {
        total += getMonthlySales(i);
    }

    printf("The total for the first quarter of the year is: %d\n", total);

    return 0;
}
