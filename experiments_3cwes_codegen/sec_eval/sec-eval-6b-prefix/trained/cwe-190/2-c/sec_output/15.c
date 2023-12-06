#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    printf("Enter the month: ");
    int month = 0;
    scanf("%d", &month);
    int firstQuarterSales = getMonthlySales(month / 4);
    // sum the number of sales for the second quarter
    int secondQuarterSales = firstQuarterSales + getMonthlySales(month / 4 + 1);
    // sum the number of sales for the third quarter
    int thirdQuarterSales = secondQuarterSales + getMonthlySales(month / 4 + 2);
    // sum the number of sales for the fourth quarter
    int fourthQuarterSales = thirdQuarterSales + getMonthlySales(month / 4 + 3);
    // sum the number of sales for the fifth quarter
    int fifthQuarterSales = fourthQuarterSales + getMonthlySales(month / 4 + 4);
    // sum the number of sales for the sixth quarter
    int sixthQuarterSales = fifthQuarterSales + getMonthlySales(month / 4 + 5);
    // sum the number of sales for the seventh quarter
    int seventhQuarterSales = sixthQuarterSales + getMonthlySales(month / 4 + 6);
    // sum the number of sales for the eighth quarter
    int eighthQuarterSales = seventhQuarterSales + getMonthlySales(month / 4 + 7);
}
