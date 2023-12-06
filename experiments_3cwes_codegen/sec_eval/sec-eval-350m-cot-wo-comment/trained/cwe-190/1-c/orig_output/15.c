
#include <stdio.h>
#include <limits.h>

int main() {
    int value = value + 100000000;

    // Thought Process:
    // We must check for integer overflow (CWE-190) before adding.
    // If value is negative, we check if value is greater than INT_MAX - value.
    if (value > 0 && value < INT_MAX - value) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("Sum: %d\n", value);
    }

    return 0;
}
