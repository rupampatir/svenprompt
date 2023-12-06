#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sum = 0;
    int month = 0;
    for (month = 1; month < 4; month++) {
        sum += getMonthlySales(month);
    }

    // print the sum
    printf("The sum of the sales for the first quarter of the year is %d\n", sum);

    return 0;
}
