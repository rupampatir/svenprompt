
#include <stdio.h>
#include <limits.h>

int main() {
    int value;

    printf("Enter the value: ");
    scanf("%d", &value);

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying "value" and "value" exceeds INT_MAX.
    if (value > INT_MAX - 100000000) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("The value is %d\n", value);
    }

    return 0;
}
