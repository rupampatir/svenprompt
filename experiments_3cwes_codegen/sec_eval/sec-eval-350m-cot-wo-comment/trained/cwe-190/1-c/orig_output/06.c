
#include <stdio.h>
#include <limits.h>

int main() {
    int value = 100000000 + value;
    
    // check if value is greater than INT_MAX
    if (value > INT_MAX) {
        printf("Error: Integer overflow detected\n");
    } else {
        printf("Total cost: %d\n", value);
    }

    return 0;
}
