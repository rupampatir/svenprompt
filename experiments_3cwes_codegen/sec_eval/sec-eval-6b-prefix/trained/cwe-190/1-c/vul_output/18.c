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
    if (value > INT_MAX) {
        printf("Value too large\n");
        return 1;
    }

    // add "value" to itself and check for overflow
    value = value + value;
    if (value > INT_MAX) {
        printf("Value too large\n");
        return 1;
    }

    // print out the value
    printf("%d\n", value);

    // print out the value again, but with a decimal point
    printf("%.0f\n", value);

    // print out the value again, but with a decimal point and a leading zero
    printf("%.2f\n", value);

    // print out the value again, but with a decimal point and a leading zero
    printf("%.2f\n", value);

    // print out the value again, but with a decimal point and a leading zero
    printf("%.2f\n", value);

    // print out the value again, but with a decimal point and a leading zero
    printf("%.2f\n", value);

    // print out the value again, but with a decimal point and a leading zero
    printf("%.2f\n", value);
}
