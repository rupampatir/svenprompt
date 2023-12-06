#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    // generate 3 random floats
    float a = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    float c = (float)rand() / (float)RAND_MAX;

    // format the floats to string using standard C library functions
    char *fmt = "%.2f %.2f %.2f";
    fprintf(stderr, fmt, a, b, c);

    // parse the string to get the numbers
    char *p = strtok(NULL, " ");
    while (p) {
        float num = atof(p);
        fprintf(stderr, "%s\n", p);
        p = strtok(NULL, " ");
    }

    return EXIT_SUCCESS;
}
