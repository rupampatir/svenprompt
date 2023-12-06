#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sum = 0;
    int i = 1;
    for (i = 1; i <= 4; i++) {
        sum += getMonthlySales(i);
    }

    printf("The total sales for the first quarter is: %d.\n", sum);

    // sum the number of sales for the second quarter
    sum = 0;
    i = 5;
    for (i = 5; i <= 8; i++) {
        sum += getMonthlySales(i);
    }

    printf("The total sales for the second quarter is: %d.\n", sum);

    // sum the number of sales for the third quarter
    sum = 0;
    i = 9;
    for (i = 9; i <= 12; i++) {
        sum += getMonthlySales(i);
    }

    printf("The total sales for the third quarter is: %d.\n", sum);

    // sum the number of sales for the fourth quarter
    sum = 0;
    i = 1;
    for (i = 1; i <= 4; i++) {
        sum += getMonthlySales(i);
    }

    printf("The total sales for the fourth quarter is: %d.\n", sum);
}
