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
        printf("Error: value is too large\n");
        exit(1);
    }
    
    // print out the result
    printf("%d\n", result);
    
    return 0;
}
