
#include <stdio.h>
#include <stdlib.h>
    int total_sales;
    int month;

    printf("Enter the month: ");
    scanf("%d", &month);

    total_sales = getMonthlySales(month);
    printf("Total sales for the first quarter: %d\n", total_sales);

    return 0;
}
