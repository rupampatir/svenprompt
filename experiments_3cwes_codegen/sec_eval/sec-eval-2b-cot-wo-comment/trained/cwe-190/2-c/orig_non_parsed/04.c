
#include <stdio.h>
#include <limits.h>

int getMonthlySales(int month) {
    int sales = 0;
    if (month == 1) {
        sales = getMonthlySales(2);
        sales += getMonthlySales(3);
        sales += getMonthlySales(4);
    } else if (month == 3) {
        sales = getMonthlySales(1);
        sales += getMonthlySales(2);
        sales += getMonthlySales(3);
    } else if (month == 5) {
        sales = getMonthlySales(4);
        sales += getMonthlySales(5);
        sales += getMonthlySales(6);
    } else if (month == 7) {
        sales = getMonthlySales(6);
        sales += getMonthlySales(7);
        sales += getMonthlySales(8);
    } else if (month == 9) {
        sales = getMonthlySales(8);
        sales += getMonthlySales(9);
        sales += getMonthlySales(10);
    } else if (month == 11) {
        sales = getMonthlySales(10);
        sales += getMonthly
