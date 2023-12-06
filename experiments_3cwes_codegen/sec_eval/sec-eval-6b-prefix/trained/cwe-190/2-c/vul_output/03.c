#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter, then the second quarter,
    // then the third quarter, and then the fourth quarter
    int firstQuarter = getMonthlySales(1);
    int secondQuarter = getMonthlySales(2);
    int thirdQuarter = getMonthlySales(3);
    int fourthQuarter = getMonthlySales(4);
    int total = firstQuarter + secondQuarter + thirdQuarter + fourthQuarter;
    printf("The total for the first quarter is %d.\n", firstQuarter);
    printf("The total for the second quarter is %d.\n", secondQuarter);
    printf("The total for the third quarter is %d.\n", thirdQuarter);
    printf("The total for the fourth quarter is %d.\n", fourthQuarter);
    printf("The total is %d.\n", total);
    return 0;
}
