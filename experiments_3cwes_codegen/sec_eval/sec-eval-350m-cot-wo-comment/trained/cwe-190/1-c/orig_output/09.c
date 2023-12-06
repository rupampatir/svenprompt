
#include <stdio.h>
#include <limits.h>

int main() {
    int value;

    // Prompt for the value
    printf("Enter the value: ");
    scanf("%d", &value);

    // Check if the value is greater than INT_MAX
    if (value > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        // Add 100000000 to "value" and check for overflow beforehand
        value += 100000000;
        if (value > INT_MAX) {
            printf("Error: Integer overflow detected\n");
        } else {
            printf("Value is %d\n", value);
        }
    }

    return 0;
}
