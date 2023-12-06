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
    char *s = "%.6f %.6f %.6f\n";
    sprintf(s, "%f %f %f\n", a, b, c);

    // output the string
    fprintf(stdout, s);

    // return 0
    return 0;
}
