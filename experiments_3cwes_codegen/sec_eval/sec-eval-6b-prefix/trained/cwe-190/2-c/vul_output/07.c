#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sum = 0;
    int month = 1;
    while (month <= 3) {
        sum += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the first quarter is %d.\n", sum);

    // sum the number of sales for the second quarter
    sum = 0;
    month = 4;
    while (month <= 6) {
        sum += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the second quarter is %d.\n", sum);

    // sum the number of sales for the third quarter
    sum = 0;
    month = 7;
    while (month <= 9) {
        sum += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the third quarter is %d.\n", sum);

    // sum the number of sales for the fourth quarter
    sum = 0;
    month = 10;
    while (month <= 12) {
        sum += getMonthlySales(month);
        month++;
    }
    printf("The total sales for the fourth quarter is %d.\n", sum);

    return 0;
}
