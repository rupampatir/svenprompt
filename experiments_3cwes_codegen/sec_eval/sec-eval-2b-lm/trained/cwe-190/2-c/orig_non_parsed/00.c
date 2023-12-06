#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sum = 0;
    for (int i = 1; i <= 12; i++) {
        sum += getMonthlySales(i);
    }

    // sum the number of sales for the second quarter of the year
    sum += getMonthlySales(13);

    // sum the number of sales for the third quarter of the year
    sum += getMonthlySales(14);

    // print the sum
    printf("The sum of the sales for the first quarter of the year is %d\n", sum);

    return 0;
}
