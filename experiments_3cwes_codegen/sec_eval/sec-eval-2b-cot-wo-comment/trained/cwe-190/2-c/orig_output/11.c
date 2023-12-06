
#include <stdio.h>
#include <limits.h>

int getMonthlySales(int month) {
    int quarter_sales = 0;

    if (month == 1) {
        quarter_sales = 100;
    } else if (month == 2) {
        quarter_sales = 200;
    } else if (month == 3) {
        quarter_sales = 300;
    } else if (month == 4) {
        quarter_sales = 400;
    } else if (month == 5) {
        quarter_sales = 500;
    } else if (month == 6) {
        quarter_sales = 600;
    } else if (month == 7) {
        quarter_sales = 700;
    } else if (month == 8) {
        quarter_sales = 800;
    } else if (month == 9) {
        quarter_sales = 900;
    } else if (month == 10) {
        quarter_sales = 1000;
    }

    return quarter_sales;
}
