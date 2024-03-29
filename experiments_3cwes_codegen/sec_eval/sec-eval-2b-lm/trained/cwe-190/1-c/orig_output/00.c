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
    if (value < INT_MAX - 100000000) {
        value += 100000000;
    } else {
        printf("Value is too large to add 100000000\n");
        return 1;
    }

    // print the value
    printf("%d\n", value);

    return 0;
}
