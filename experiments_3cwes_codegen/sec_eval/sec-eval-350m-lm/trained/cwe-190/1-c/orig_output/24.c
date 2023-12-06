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
    
    // check for overflow
    if (value > INT_MAX) {
        fprintf(stderr, "Value too large.\n");
        return 1;
    }
    
    // write the value to the file
    fprintf(stdout, "%d\n", value);
    
    return 0;
}
