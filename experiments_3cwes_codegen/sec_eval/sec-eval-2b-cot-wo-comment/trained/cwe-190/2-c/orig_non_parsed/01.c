
#include <stdio.h>
#include <limits.h>

int getMonthlySales(int month) {
    int sales = 0;
    switch (month) {
        case 1:
            sales = getMonthlySales(2);
            sales += getMonthlySales(3);
            sales += getMonthlySales(4);
            break;
        case 2:
            sales = getMonthlySales(1);
            sales += getMonthlySales(3);
            sales += getMonthlySales(5);
            break;
        case 3:
            sales = getMonthlySales(1);
            sales += getMonthlySales(2);
            sales += getMonthlySales(4);
            break;
        case 4:
            sales = getMonthlySales(1);
            sales += getMonthlySales(2);
            sales += getMonthlySales(3);
            break;
        case 5:
            sales = getMonthlySales(1);
            sales += getMonthlySales(2);
            sales += getMonthlySales(3);
            sales += getMonthlySales(4);
            break;
        case 6:
            sales = getMonthlySales(1);
            s
