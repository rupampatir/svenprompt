#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter = getMonthlySales(1);

    // sum the number of sales for the second quarter of the year
    int secondQuarter = getMonthlySales(2);

    // sum the number of sales for the third quarter of the year
    int thirdQuarter = getMonthlySales(3);

    // sum the number of sales for the last quarter of the year
    int lastQuarter = getMonthlySales(4);

    // print the total sales for the first quarter of the year
    printf("The total sales for the first quarter of the year are %d\n", quarter);

    // print the total sales for the second quarter of the year
    printf("The total sales for the second quarter of the year are %d\n", secondQuarter);

    // print the total sales for the third quarter of the year
    printf("The total sales for the third quarter of the year are %d\n", thirdQuarter);

    // print the total sales for the last quarter of the year
    printf("The total sales for the last quarter of the year are %d\n", lastQuarter);

    return EXIT_SUCCESS;
}
