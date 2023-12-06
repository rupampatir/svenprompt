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
    int result = value + 100000000;
    if (result < 0) {
        fprintf(stderr, "Overflow!\n");
        exit(EXIT_FAILURE);
    }

    // print out the result
    printf("%d\n", result);
    
    return EXIT_SUCCESS;
}
