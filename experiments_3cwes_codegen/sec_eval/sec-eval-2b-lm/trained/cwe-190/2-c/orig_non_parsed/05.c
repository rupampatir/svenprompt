#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    int sum = 0;
    for (int month = 1; month <= 3; month++) {
        sum += getMonthlySales(month);
    }

    // print the sum of sales for the first quarter
    printf("The total sales for the first quarter are %d\n", sum);

    // sum the number of sales for the second quarter
    sum = 0;
    for (int month = 4; month <= 6; month++) {
        sum += getMonthlySales(month);
    }

    // print the sum of sales for the second quarter
    printf("The total sales for the second quarter are %d\n", sum);

    // sum the number of sales for the third quarter
    sum = 0;
    for (int month = 7; month <= 9; month++) {
        sum += getMonthlySales(month);
    }

    // print the sum of sales for the third quarter
    printf("The total sales for the third quarter are %d\n", sum);

    // sum the number of sales for the fourth quarter
    sum = 0;
    for (int month = 10; month <= 12; month++) {
        sum += getMonthlySales(month);
    }
}
