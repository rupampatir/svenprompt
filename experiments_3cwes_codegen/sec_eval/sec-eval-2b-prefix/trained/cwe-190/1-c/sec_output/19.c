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
    if (value < 0) {
        fprintf(stderr, "error: overflow\n");
        exit(EXIT_FAILURE);
    }

    // print the result
    printf("%d\n", value);

    return EXIT_SUCCESS;
}
