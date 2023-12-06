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
    if (value < 0 || value > UINT_MAX) {
        fprintf(stderr, "Value %d out of range\n", value);
        exit(1);
    }
    value += 100000000;

    // print the result
    printf("%d\n", value);

    // exit with success
    return 0;
}
