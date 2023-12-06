#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = 0;
    int month = 0;
    int salesPerMonth = 0;
    int salesPerYear = 0;
    int salesPerMonthAndYear = 0;
    int salesPerMonthAndYearAndMonth = 0;
    int salesPerYearAndMonth = 0;

    // get the number of sales per month
    salesPerMonth = getMonthlySales(1);
    salesPerMonthAndYear = salesPerMonth;
    salesPerMonthAndYearAndMonth = salesPerMonth;
    salesPerYearAndMonth = salesPerMonth;
    salesPerYearAndMonthAndMonth = salesPerMonth;

    // get the number of sales per year
    salesPerYear = getMonthlySales(12);
    salesPerYearAndMonth = salesPerYear;
    salesPerYearAndMonthAndMonth = salesPerYear;
    salesPerYearAndMonthAndMonth = salesPerYear;
    salesPerYearAndMonthAndMonthAndMonth = salesPerYear;
}
