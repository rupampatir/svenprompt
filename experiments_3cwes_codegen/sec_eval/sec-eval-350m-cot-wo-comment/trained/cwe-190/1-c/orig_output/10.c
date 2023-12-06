
#include <stdio.h>
#include <limits.h>

int main() {
    int value;

    // check for integer overflow
    if (value > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("%d\n", value);
    }

    return 0;
}
