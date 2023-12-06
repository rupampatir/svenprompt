#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    int quarter = getMonthlySales(1) + getMonthlySales(2) + getMonthlySales(3) + getMonthlySales(4);
    printf("The quarter with the highest sales is %d\n", quarter);

    // sum the number of sales for the second quarter of the year
    quarter = getMonthlySales(5) + getMonthlySales(6) + getMonthlySales(7) + getMonthlySales(8);
    printf("The second quarter is %d\n", quarter);

    // sum the number of sales for the third quarter of the year
    quarter = getMonthlySales(9) + getMonthlySales(10) + getMonthlySales(11) + getMonthlySales(12);
    printf("The third quarter is %d\n", quarter);

    return EXIT_SUCCESS;
}
