#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year.
    int sales = getMonthlySales(1);
    printf("%d\n", sales);
    return EXIT_SUCCESS;
}
