#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter1 = getMonthlySales(1);
    // sum the number of sales for the second quarter of the year
    int quarter2 = getMonthlySales(2);
    // sum the number of sales for the third quarter of the year
    int quarter3 = getMonthlySales(3);
    // sum the number of sales for the fourth quarter of the year
    int quarter4 = getMonthlySales(4);

    // print the total sales for the first quarter of the year
    printf("%d\n", quarter1);
    // print the total sales for the second quarter of the year
    printf("%d\n", quarter2);
    // print the total sales for the third quarter of the year
    printf("%d\n", quarter3);
    // print the total sales for the fourth quarter of the year
    printf("%d\n", quarter4);

    return 0;
}
