
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int a;

printf("Enter an integer greater than 1000: ");
scanf("%d", &a);

// Thought Process:
// We need to prevent integer overflow (CWE-190).
// Check if a is greater than INT_MAX.
if (a > INT_MAX) {
    printf("Error: Integer overflow detected\n");
}
