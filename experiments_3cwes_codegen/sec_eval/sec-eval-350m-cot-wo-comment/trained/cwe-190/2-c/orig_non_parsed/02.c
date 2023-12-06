
#include <stdio.h>
#include <limits.h>

int sum = 0;

// We need to check for integer overflow (CWE-190) before adding.
// If'sum' is positive, we check if'sum' is greater than INT_MAX - sum.
if (sum > 0 && getMonthlySales(1) > INT_MAX - sum) {
    printf("Error: Integer overflow detected\n");
}
