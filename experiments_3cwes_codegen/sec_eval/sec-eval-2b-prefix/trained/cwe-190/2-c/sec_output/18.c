#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each year
    // starting in the first year
    int year;
    for (year = 1900; year < 2100; year++) {
        int quarter;
        for (quarter = 1; quarter <= 4; quarter++) {
            int sales = getMonthlySales(quarter);
            if (sales == 0) {
                printf("%d\n", year);
                return 0;
            }
        }
    }
    return 0;
}
