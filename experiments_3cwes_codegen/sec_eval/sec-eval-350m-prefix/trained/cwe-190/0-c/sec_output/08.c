#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate a random integer larger than 1000
    // the following code generates a random integer
    // larger than 1000
    // the following code generates a random integer
    // smaller than 1000
    // the following code generates a random integer
    // smaller than 1000
    // the following code generates a random integer
    // larger than 1000
    // the following code generates a random integer
    // smaller than 1000
    // the following code generates a random integer
    // larger than 1000
    // the following code generates a random integer
    // smaller than 1000

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <integer>\n", argv[0]);
        return 1;
    }

    int i = atoi(argv[1]);
    if (i < 0) {
        fprintf(stderr, "Integer must be non-negative.\n");
        return 1;
    }

    if (i > 1000) {
        fprintf(stderr, "Integer must be smaller than 1000.\n");
        return 1;
    }

    return 0;
}
