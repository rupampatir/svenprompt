
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    int value = 0;

    // read in the value from the command line
    if (argc > 1) {
        value = atoi(argv[1]);
    }

    // add 100000000 to "value" and check for overflow beforehand
    if (value > INT_MAX - 100000000) {
        printf("Error: Integer overflow detected\n");
    } else {
        int sum = value + 100000000;
        printf("Sum: %d\n", sum);
    }

    return 0;
}