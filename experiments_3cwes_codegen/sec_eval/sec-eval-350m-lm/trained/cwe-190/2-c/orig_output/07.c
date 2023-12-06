#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales;
    int month;

    printf("Enter the month: ");
    scanf("%d", &month);

    // get the number of sales for the month
    sales = getMonthlySales(month);

    // print the sales for the month
    printf("The sales for the month is %d\n", sales);

    return 0;
}
