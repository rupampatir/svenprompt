
#include <stdio.h>
#include <limits.h>

int main() {
    int value;

    printf("Enter the value: ");
    scanf("%d", &value);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying "value" and "value" exceeds INT_MAX.
    if (value > 0 && value < INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        int total_cost = value * value;
        printf("Total cost: %d\n", total_cost);
    }

    return 0;
}
