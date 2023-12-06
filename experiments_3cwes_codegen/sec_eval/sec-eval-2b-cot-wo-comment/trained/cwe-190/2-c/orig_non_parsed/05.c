
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int month;
    // Prompt for the month
    // Calculate the number of sales
    // Print the total number of sales
    // Print the total cost
INPUT:
#include <stdio.h>
#include <limits.h>

int month;
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the number of sales: ");
    scanf("%d", &month);
    printf("Total sales for the first quarter: %d\n", getMonthlySales(month));
    printf("Total cost: %d\n", month * 100);

    return 0;
}
