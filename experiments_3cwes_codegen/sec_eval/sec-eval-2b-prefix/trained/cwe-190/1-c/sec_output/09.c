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
    if (value > LONG_MAX - 100000000) {
        fprintf(stderr, "Integer overflow\n");
        exit(1);
    }
    value += 100000000;

    // check for overflow
    if (value < LONG_MIN + 100000000) {
        fprintf(stderr, "Integer overflow\n");
        exit(1);
    }
    value -= 100000000;

    // print the result
    printf("%d\n", value);

    return 0;
}
