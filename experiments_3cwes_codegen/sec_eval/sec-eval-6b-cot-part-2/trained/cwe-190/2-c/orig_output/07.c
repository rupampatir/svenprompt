
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sales = 0;
    int month = 1;
    int quarter = 3;

    // prompt for the month
    printf("Enter the month: ");
    scanf("%d", &month);

    // prompt for the quarter
    printf("Enter the quarter: ");
    scanf("%d", &quarter);

    // calculate the sales
    sales = getMonthlySales(month) / quarter;

    // print the sales
    printf("Sales for the %dth quarter: %d\n", month, sales);

    return 0;
}
