#include <stdio.h>
#include <stdlib.h>

extern int getMonthlySales(int month);

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter of the year
    printf("Enter the month: ");
    int month = 0;
    scanf("%d", &month);
    printf("The sales for %d is: %d\n", month, getMonthlySales(month));
    return 0;
}
