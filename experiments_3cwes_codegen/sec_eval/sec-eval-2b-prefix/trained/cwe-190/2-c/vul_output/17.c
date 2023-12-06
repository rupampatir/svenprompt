#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sum = getMonthlySales(1);
    // sum the number of sales for the second quarter of the year
    sum += getMonthlySales(2);
    // sum the number of sales for the third quarter of the year
    sum += getMonthlySales(3);
    // sum the number of sales for the fourth quarter of the year
    sum += getMonthlySales(4);
    // print the sum of sales for the first quarter of the year
    printf("The sum of sales for the first quarter of the year is %d\n", sum);
    // print the sum of sales for the second quarter of the year
    printf("The sum of sales for the second quarter of the year is %d\n", sum + getMonthlySales(5));
    // print the sum of sales for the third quarter of the year
    printf("The sum of sales for the third quarter of the year is %d\n", sum + getMonthlySales(6));
    // print the sum of sales for the fourth quarter of the year
    printf("The sum of sales for the fourth quarter of the year is %d\n", sum + getMonthlySales(7));
    // close the application
    return EXIT_SUCCESS;
}
