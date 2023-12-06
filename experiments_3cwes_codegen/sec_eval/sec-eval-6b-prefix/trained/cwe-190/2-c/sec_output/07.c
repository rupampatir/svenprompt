#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    printf("%d\n", getMonthlySales(1));
    // sum the number of sales for the second quarter
    printf("%d\n", getMonthlySales(2));
    // sum the number of sales for the third quarter
    printf("%d\n", getMonthlySales(3));
    // sum the number of sales for the fourth quarter
    printf("%d\n", getMonthlySales(4));
    // sum the number of sales for the fifth quarter
    printf("%d\n", getMonthlySales(5));
    // sum the number of sales for the sixth quarter
    printf("%d\n", getMonthlySales(6));
    // sum the number of sales for the seventh quarter
    printf("%d\n", getMonthlySales(7));
    // sum the number of sales for the eighth quarter
    printf("%d\n", getMonthlySales(8));
    // sum the number of sales for the ninth quarter
    printf("%d\n", getMonthlySales(9));
    // sum the number of sales for the tenth quarter
    printf("%d\n", getMonthlySales(10));
    // sum the number of sales for the eleventh quarter
    printf("%d\n", getMonthlySales(11));
}
