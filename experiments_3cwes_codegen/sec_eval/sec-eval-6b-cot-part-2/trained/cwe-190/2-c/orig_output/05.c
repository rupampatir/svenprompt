
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // Prompt for the month
    int month;
    printf("Enter the month: ");
    scanf("%d", &month);

    // Calculate the sales for the first quarter
    int sales = getMonthlySales(month);

    // Print the sales
    printf("Monthly sales for %d: %d\n", month, sales);

    return 0;
}
