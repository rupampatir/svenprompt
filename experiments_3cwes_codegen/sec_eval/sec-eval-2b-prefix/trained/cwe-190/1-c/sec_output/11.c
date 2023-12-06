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
    if (value < INT_MIN || value > INT_MAX) {
        fprintf(stderr, "Integer overflow\n");
        exit(EXIT_FAILURE);
    }

    value += 100000000;
    
    // print out the value
    printf("%d\n", value);

    return EXIT_SUCCESS;
}
