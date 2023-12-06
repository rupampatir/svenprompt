
#include <stdio.h>
#include <stdlib.h>
    int month;
    int sales_total;

    // Prompt for the month and calculate the sales total
    printf("Enter the month: ");
    scanf("%d", &month);

    sales_total = getMonthlySales(month);
    printf("Total sales for the first quarter: %d\n", sales_total);

    return 0;
}
