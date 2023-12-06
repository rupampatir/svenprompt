#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of each month
    // in the first year of the quarter.
    //
    // The total sales for the first quarter of each month
    // in the first year of the quarter is:
    //
    //   (1) (the number of sales for the first quarter of the previous year)
    //   + (2) the number of sales for the first quarter of this year
    //   + (3) the number of sales for the second quarter of this year
    //   + (4) the number of sales for the second quarter of the previous year
    //   + (5) the number of sales for the first quarter of the previous year
    //   + (6) the number of sales for the second quarter of the previous year
    //   + (7) the number of sales for the third quarter of this year
    //   + (8) the number of sales for the third quarter of the previous year
    //   + (9) the number of sales for the fourth quarter of this year
    //   + (10) the number of sales for the fourth quarter of the previous year
    //
    // The total sales for the first quarter of each month
    // in the first year of the quarter is:
    //
    //   (1) (the number of sales for the first quarter of the previous year)
}
