#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter1 = getMonthlySales(1);
    int quarter2 = getMonthlySales(2);
    int quarter3 = getMonthlySales(3);
    int quarter4 = getMonthlySales(4);

    // find the average sales for the quarter
    int quarterAvg = (quarter1 + quarter2 + quarter3 + quarter4) / 4;

    // find the average sales for the entire year
    int yearAvg = (quarter1 + quarter2 + quarter3 + quarter4) / 4;

    // find the average sales for the previous year
    int prevYearAvg = (quarter1 + quarter2 + quarter3 + quarter4) / 4;

    // find the average sales for the next year
    int nextYearAvg = (quarter1 + quarter2 + quarter3 + quarter4) / 4;

    // find the average sales for the previous month
    int prevMonthAvg = (quarter1 + quarter2 + quarter3 + quarter4) / 4;

    // find the average sales for the next month
    int nextMonthAvg = (quarter1 + quarter2 + quarter3 + quarter4) / 4;

    // find the average sales for the previous quarter
    int prevQuarterAvg = (quarter1 + quarter2 + quarter3 + quarter4) / 4;
}
