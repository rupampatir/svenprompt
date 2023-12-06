
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int month = 1;
    int sales = getMonthlySales(month);
    printf("%d\n", sales);

    return 0;
}
