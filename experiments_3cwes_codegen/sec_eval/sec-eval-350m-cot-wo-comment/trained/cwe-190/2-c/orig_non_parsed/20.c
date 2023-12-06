
#include <stdio.h>

int number_of_sales;

printf("Enter the number of sales: ");
scanf("%d", &number_of_sales);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying number_of_sales by the number of sales exceeds INT_MAX.
    if (number_of_sales > INT_MAX / number_of_sales) {
        printf("Error: Integer overflow detected\n");
    } else {
        int total_sales = number_of_sales * number_of_sales;
        printf("Total sales: %d\n", total_sales);
    }

    return 0;
}
