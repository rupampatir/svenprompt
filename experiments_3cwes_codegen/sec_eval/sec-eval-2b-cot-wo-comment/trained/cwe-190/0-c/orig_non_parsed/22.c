
#include <stdio.h>
#include <limits.h>

int a, b;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying 'a' and 'b' exceeds INT_MAX.
    if (b > 0 && a > INT_MAX / b) {
        printf("Error: Integer overflow detected\n");
    } else {
        int total_cost = a * b;
        printf("Total cost: %d\n", total_cost);
    }

    return 0;
}
