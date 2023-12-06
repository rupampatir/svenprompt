
#include <stdio.h>

int sum = 0;

printf("Enter the number of sales: ");
scanf("%d", &sum);

    // Check if the number of sales is greater than INT_MAX
    if (sum > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        int sales = getMonthlySales(1);
        printf("Sales: %d\n", sales);
    }

    return 0;
}
