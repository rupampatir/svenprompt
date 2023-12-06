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
    char *s = str_fmt(a);
    free(s);
    s = str_fmt(b);
    free(s);
    s = str_fmt(c);
    free(s);

    // print the floats
    printf("%f %f %f\n", a, b, c);

    return 0;
}
