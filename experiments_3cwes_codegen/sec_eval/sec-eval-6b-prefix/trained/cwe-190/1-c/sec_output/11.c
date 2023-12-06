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
        printf("The result of value + 100000000 is negative.\n");
        exit(EXIT_FAILURE);
    }

    // print out the result
    printf("The result of value + 100000000 is %d.\n", result);

    // exit normally
    exit(EXIT_SUCCESS);
}
