#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    printf("The first quarter of the year has %d sales\n", getMonthlySales(1));
    // sum the number of sales for the second quarter of the year
    printf("The second quarter of the year has %d sales\n", getMonthlySales(2));
    // sum the number of sales for the third quarter of the year
    printf("The third quarter of the year has %d sales\n", getMonthlySales(3));
    // sum the number of sales for the fourth quarter of the year
    printf("The fourth quarter of the year has %d sales\n", getMonthlySales(4));
    // sum the number of sales for the fifth quarter of the year
    printf("The fifth quarter of the year has %d sales\n", getMonthlySales(5));
    // sum the number of sales for the sixth quarter of the year
    printf("The sixth quarter of the year has %d sales\n", getMonthlySales(6));
    // sum the number of sales for the seventh quarter of the year
    printf("The seventh quarter of the year has %d sales\n", getMonthlySales(7));
}
