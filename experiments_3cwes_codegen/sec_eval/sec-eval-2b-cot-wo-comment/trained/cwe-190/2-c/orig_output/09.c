
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // sum the number of sales for the first quarter
    int month;
    printf("Enter the month: ");
    scanf("%d", &month);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if month is greater than INT_MAX - 3.
    if (month > INT_MAX - 3) {
        printf("Error: Integer overflow detected\n");
    } else {
        int sales_sum = getMonthlySales(month);
        printf("Sale sum for %d: %d\n", month, sales_sum);
    }

    return 0;
}
