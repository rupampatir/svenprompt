#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = 0;
    for(int i = 1; i <= 4; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total for the first quarter is %d.\n", sales);

    // sum the number of sales for the second quarter
    sales = 0;
    for(int i = 5; i <= 8; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total for the second quarter is %d.\n", sales);

    // sum the number of sales for the third quarter
    sales = 0;
    for(int i = 9; i <= 12; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total for the third quarter is %d.\n", sales);

    // sum the number of sales for the fourth quarter
    sales = 0;
    for(int i = 1; i <= 4; i++) {
        sales += getMonthlySales(i);
    }
    printf("The total for the fourth quarter is %d.\n", sales);
}
