
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sales = getMonthlySales(1);
    printf("%d\n", sales);
    return 0;
}
