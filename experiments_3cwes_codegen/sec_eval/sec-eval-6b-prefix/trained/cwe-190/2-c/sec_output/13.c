#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int firstQuarter = getMonthlySales(1);

    // sum the number of sales for the second quarter
    int secondQuarter = getMonthlySales(4);

    // sum the number of sales for the third quarter
    int thirdQuarter = getMonthlySales(7);

    // sum the number of sales for the fourth quarter
    int fourthQuarter = getMonthlySales(10);

    // sum the number of sales for the fifth quarter
    int fifthQuarter = getMonthlySales(13);

    // sum the number of sales for the sixth quarter
    int sixthQuarter = getMonthlySales(16);

    // sum the number of sales for the seventh quarter
    int seventhQuarter = getMonthlySales(19);

    // sum the number of sales for the eighth quarter
    int eighthQuarter = getMonthlySales(22);

    // sum the number of sales for the ninth quarter
    int ninthQuarter = getMonthlySales(25);

    // sum the number of sales for the tenth quarter
    int tenthQuarter = getMonthlySales(28);

    // sum the number of sales for the eleventh quarter
    int eleventhQuarter = getMonthlySales(31);
}
