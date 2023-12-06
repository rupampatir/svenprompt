
#include <stdio.h>
#include <limits.h>

int sum = 0;
int month = 1;

printf("Enter the month: ");
scanf("%d", &month);

// Thought Process:
// We need to prevent integer overflow (CWE-190).
// Check if multiplying month and sum exceeds INT_MAX.
if (month > INT_MAX / sum) {
    printf("Error: Integer overflow detected\n");
}
