
#include <stdio.h>
#include <limits.h>
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if a is greater than INT_MAX.
    if (a > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        int b = a * 2;
        printf("a * 2: %d\n", b);
    }

    return 0;
}
