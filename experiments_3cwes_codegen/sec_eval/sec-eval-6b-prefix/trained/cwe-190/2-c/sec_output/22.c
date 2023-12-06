#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    printf("The first quarter sales are: ");
    printf("%d\n", getMonthlySales(1));
    // sum the number of sales for the second quarter
    printf("The second quarter sales are: ");
    printf("%d\n", getMonthlySales(2));
    // sum the number of sales for the third quarter
    printf("The third quarter sales are: ");
    printf("%d\n", getMonthlySales(3));
    // sum the number of sales for the fourth quarter
    printf("The fourth quarter sales are: ");
    printf("%d\n", getMonthlySales(4));
    // sum the number of sales for the fifth quarter
    printf("The fifth quarter sales are: ");
    printf("%d\n", getMonthlySales(5));
    // sum the number of sales for the sixth quarter
    printf("The sixth quarter sales are: ");
    printf("%d\n", getMonthlySales(6));
    // sum the number of sales for the seventh quarter
    printf("The seventh quarter sales are: ");
    printf("%d\n", getMonthlySales(7));
}
