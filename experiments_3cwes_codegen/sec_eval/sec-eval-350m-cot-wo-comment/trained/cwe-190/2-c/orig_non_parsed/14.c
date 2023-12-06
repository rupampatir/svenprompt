
#include <stdio.h>
#include <limits.h>

int number_of_sales;
int total_sales;

printf("Enter the number of sales: ");
scanf("%d", &number_of_sales);

// Thought Process:
// We need to prevent integer overflow (CWE-190).
// Check if multiplying number_of_sales and total_sales exceeds INT_MAX.
if (number_of_sales > INT_MAX / total_sales) {
    printf("Error: Integer overflow detected\n");
}
