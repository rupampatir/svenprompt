#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    printf("The total sales for the first quarter is: %d\n", getMonthlySales(1));
    // sum the number of sales for the second quarter
    printf("The total sales for the second quarter is: %d\n", getMonthlySales(2));
    // sum the number of sales for the third quarter
    printf("The total sales for the third quarter is: %d\n", getMonthlySales(3));
    // sum the number of sales for the fourth quarter
    printf("The total sales for the fourth quarter is: %d\n", getMonthlySales(4));
    // sum the number of sales for the fifth quarter
    printf("The total sales for the fifth quarter is: %d\n", getMonthlySales(5));
    // sum the number of sales for the sixth quarter
    printf("The total sales for the sixth quarter is: %d\n", getMonthlySales(6));
    // sum the number of sales for the seventh quarter
    printf("The total sales for the seventh quarter is: %d\n", getMonthlySales(7));
    // sum the number of sales for the eighth quarter
    printf("The total sales for the eighth quarter is: %d\n", getMonthlySales(8));
}
