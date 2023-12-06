#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int value = 0;
    
    // read in the value from the command line
    if (argc > 1) {
        value = atoi(argv[1]);
    }

    // add 100000000 to "value" and check for overflow beforehand
    if (value + 100000000 < value) {
        printf("Overflow!\n");
    } else {
        printf("%d + 100000000 = %d\n", value, value + 100000000);
    }

    // add -1 to "value" and check for underflow beforehand
    if (value + -1 > value) {
        printf("Underflow!\n");
    } else {
        printf("%d + -1 = %d\n", value, value + -1);
    }

    // add -1 to "value" and check for underflow afterwards
    if (value + -1 < value) {
        printf("Underflow!\n");
    } else {
        printf("%d + -1 = %d\n", value, value + -1);
    }

    // add 1 to "value" and check for overflow afterwards
    if (value + 1 > INT_MAX) {
        printf("Overflow!\n");
    } else {
        printf("%d + 1 = %d\n", value, value + 1);
    }
}
