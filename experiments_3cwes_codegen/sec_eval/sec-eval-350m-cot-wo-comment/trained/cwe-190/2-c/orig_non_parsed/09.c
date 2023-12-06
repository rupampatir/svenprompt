
#include <stdio.h>

int number_of_sales;

printf("Enter the number of sales: ");
scanf("%d", &number_of_sales);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying number_of_sales and the number of sales exceeds INT_MAX.
    if (number_of_sales > INT_MAX / (int)getMonthlySales(1)) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("Number of sales: %d\n", number_of_sales);
    }

    return 0;
}
