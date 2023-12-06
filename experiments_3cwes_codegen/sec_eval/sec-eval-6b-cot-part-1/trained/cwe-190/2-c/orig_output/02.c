
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Prompt for the month
    int month;
    printf("Enter the month: ");
    scanf("%d", &month);

    // Calculate the number of sales for the first quarter
    int sales = getMonthlySales(month);

    // Print the number of sales
    printf("The number of sales for the first quarter of %d was %d.\n", month, sales);

    return 0;
}
