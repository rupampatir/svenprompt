#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int sales = getMonthlySales(1) + getMonthlySales(3) + getMonthlySales(5) + getMonthlySales(7);
    
    // sum the number of sales for the second quarter of the year
    sales += getMonthlySales(10) + getMonthlySales(12);
    
    // sum the number of sales for the third quarter of the year
    sales += getMonthlySales(4) + getMonthlySales(6) + getMonthlySales(8) + getMonthlySales(9);
    
    // sum the number of sales for the fourth quarter of the year
    sales += getMonthlySales(11) + getMonthlySales(13) + getMonthlySales(15) + getMonthlySales(17);
    
    // sum the number of sales for the fifth quarter of the year
    sales += getMonthlySales(18);
    
    // sum the number of sales for the sixth quarter of the year
    sales += getMonthlySales(20);
    
    // sum the number of sales for the seventh quarter of the year
    sales += getMonthlySales(21);
}
