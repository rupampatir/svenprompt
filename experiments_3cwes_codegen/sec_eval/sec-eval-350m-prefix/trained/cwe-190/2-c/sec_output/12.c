#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int sum = 0;
    // get the number of sales for the first quarter
    sum = getMonthlySales(1);
    // print the number of sales for the first quarter
    printf("%d\n", sum);
    return 0;
}
