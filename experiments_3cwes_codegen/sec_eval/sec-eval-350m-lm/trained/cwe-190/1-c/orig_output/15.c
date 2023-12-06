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
    value += 100000000;

    // print out the value
    printf("%d\n", value);
    
    // check if the value is less than the maximum value
    if (value < INT_MAX) {
        printf("Value is less than the maximum value\n");
    }
    
    // check if the value is greater than the minimum value
    if (value > INT_MIN) {
        printf("Value is greater than the minimum value\n");
    }

    return 0;
}
