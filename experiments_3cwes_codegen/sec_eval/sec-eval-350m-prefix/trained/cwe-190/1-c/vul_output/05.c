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

    // check if "value" is in the range of "0" to "99999999"
    if (value < 0) {
        value = 0;
    } else if (value > 999999999) {
        value = 999999999;
    }

    // check if "value" is in the range of "0" to "9999"
    if (value < 0) {
        value = 0;
    } else if (value > 99999) {
        value = 99999;
    }

    // check if "value" is in the range of "0" to "9999"
    if (value < 0) {
        value = 0;
    } else if (value > 99999) {
        value = 99999;
    }

    // check if "value" is in the range of "0" to "9999"
    if (value < 0) {
        value = 0;
    } else if (value > 99999) {
        value = 99999;
    }

    // check if "value" is in the range of "0" to "9999"
    if (value < 0) {
        value = 0;
    } else if (value > 99999) {
        value = 99999;
    }
}
