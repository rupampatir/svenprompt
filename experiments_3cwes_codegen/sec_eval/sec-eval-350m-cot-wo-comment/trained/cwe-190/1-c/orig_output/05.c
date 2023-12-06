
#include <stdio.h>
#include <limits.h>

int main() {
    int value = value + 100000000;
    if (value > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("Value is: %d\n", value);
    }

    return 0;
}
