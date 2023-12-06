#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);
    printf("The first quarter sales are: %d\n", sales);

    // sum the number of sales for the second quarter
    sales = getMonthlySales(2);
    printf("The second quarter sales are: %d\n", sales);

    // sum the number of sales for the third quarter
    sales = getMonthlySales(3);
    printf("The third quarter sales are: %d\n", sales);

    // sum the number of sales for the fourth quarter
    sales = getMonthlySales(4);
    printf("The fourth quarter sales are: %d\n", sales);

    // sum the number of sales for the fifth quarter
    sales = getMonthlySales(5);
    printf("The fifth quarter sales are: %d\n", sales);

    // sum the number of sales for the sixth quarter
    sales = getMonthlySales(6);
    printf("The sixth quarter sales are: %d\n", sales);

    // sum the number of sales for the seventh quarter
    sales = getMonthlySales(7);
    printf("The seventh quarter sales are: %d\n", sales);
}
