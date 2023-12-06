
#include <stdio.h>
#include <limits.h>

int a, b;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);

    // Thought Process:
    // We must check for integer overflow (CWE-190) before adding.
    // If 'b' is positive, we check if 'a' is greater than INT_MAX - b.
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        printf("Error: Integer overflow detected\n");
    } else {
        int sum = a + b;
        printf("Sum: %d\n", sum);
    }

    return 0;
}
