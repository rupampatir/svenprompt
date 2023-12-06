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

    // check if the value is within the range of a signed integer
    if (value < 0) {
        value = 0;
    } else if (value > (int)INT_MAX) {
        value = INT_MAX;
    }

    // print the value
    printf("The value is %d\n", value);

    // return 0
    return 0;
}
