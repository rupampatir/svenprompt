#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    printf("The sum of the sales for the first quarter of the year is %d.\n", getMonthlySales(1));

    // sum the number of sales for the second quarter of the year
    printf("The sum of the sales for the second quarter of the year is %d.\n", getMonthlySales(4));

    // sum the number of sales for the third quarter of the year
    printf("The sum of the sales for the third quarter of the year is %d.\n", getMonthlySales(6));

    // sum the number of sales for the fourth quarter of the year
    printf("The sum of the sales for the fourth quarter of the year is %d.\n", getMonthlySales(9));

    // sum the number of sales for the fifth quarter of the year
    printf("The sum of the sales for the fifth quarter of the year is %d.\n", getMonthlySales(10));

    // sum the number of sales for the sixth quarter of the year
    printf("The sum of the sales for the sixth quarter of the year is %d.\n", getMonthlySales(12));
}
