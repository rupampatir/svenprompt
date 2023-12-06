#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    int i;
    int max = 1;
    while (max < 1000) {
        max *= 2;
    }
    // generate a random integer smaller than max
    i = rand() % max;
    // generate a random integer between 0 and max-1
    i = (i + 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
    // generate a random integer between 0 and i-1
    i = (i + max - 1) % max;
}
