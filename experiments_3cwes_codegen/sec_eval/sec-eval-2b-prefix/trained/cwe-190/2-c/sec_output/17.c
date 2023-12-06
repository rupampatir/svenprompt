#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each year
    // in the previous year
    // then sum the number of sales for the second quarter
    // then sum the number of sales for the third quarter
    // then sum the number of sales for the fourth quarter
    // then sum the number of sales for the fifth quarter
    // then sum the number of sales for the sixth quarter
    // then sum the number of sales for the seventh quarter
    // then sum the number of sales for the eighth quarter
    // then sum the number of sales for the ninth quarter
    // then sum the number of sales for the tenth quarter

    int quarter;
    int year;
    int month;
    int sales;

    // get the quarter number
    quarter = atoi(argv[1]);

    // get the year
    year = atoi(argv[2]);

    // get the month
    month = atoi(argv[3]);

    // get the sales
    sales = getMonthlySales(month);
}
