
#include <stdio.h>
#include <limits.h>

int main() {
    int value = value + 100000000;

    // Thought Process:
    // We need to prevent integer overflow (CWE-190).
    // Check if multiplying value by 100000000 is greater than INT_MAX.
    if (value > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("The value was %d\n", value);
    }

    return 0;
}
