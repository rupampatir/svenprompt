#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sum = 0;
    for (int month = 1; month < 13; month++) {
        sum += getMonthlySales(month);
    }

    // print the sum of sales for the first quarter of the year
    printf("The sum of sales for the first quarter of the year is: %d\n", sum);

    return 0;
}
