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
    char *s = strfmt();

    // print the values of the random floats
    fprintf(stdout, "a: %f\n", a);
    fprintf(stdout, "b: %f\n", b);
    fprintf(stdout, "c: %f\n", c);

    // free the memory allocated by strfmt
    free(s);

    // return 0
    return 0;
}
