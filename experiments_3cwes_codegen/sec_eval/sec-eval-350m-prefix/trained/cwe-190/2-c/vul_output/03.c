#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the month
    int sales = getMonthlySales(1);

    // print the sales for the first quarter of the month
    printf("Sales for the first quarter of the month: %d\n", sales);

    // print the sales for the third quarter of the month
    printf("Sales for the third quarter of the month: %d\n", sales / 3);

    // print the sales for the fourth quarter of the month
    printf("Sales for the fourth quarter of the month: %d\n", sales / 4);

    // print the sales for the fifth quarter of the month
    printf("Sales for the fifth quarter of the month: %d\n", sales / 5);

    // print the sales for the sixth quarter of the month
    printf("Sales for the sixth quarter of the month: %d\n", sales / 6);

    // print the sales for the seventh quarter of the month
    printf("Sales for the seventh quarter of the month: %d\n", sales / 7);

    // print the sales for the eighth quarter of the month
    printf("Sales for the eighth quarter of the month: %d\n", sales / 8);

    // print the sales for the ninth quarter of the month
    printf("Sales for the ninth quarter of the month: %d\n", sales / 9);
}
