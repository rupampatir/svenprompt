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
    char *s = strfmt(a);
    free(s);
    s = strfmt(b);
    free(s);
    s = strfmt(c);
    free(s);

    // convert the string to a float
    float f = strtod(s, NULL);

    // convert the float to a string
    char *c = strfmt(f);

    // convert the string to a float
    float f2 = strtod(c, NULL);

    // convert the float to a string
    char *c2 = strfmt(f2);

    // convert the string to a float
    float f3 = strtod(c2, NULL);

    // convert the float to a string
    char *c3 = strfmt(f3);

    // convert the string to a float
    float f4 = strtod(c3, NULL);

    // convert the float to a string
    char *c4 = strfmt(f4);

    // convert the string to a float
    float f5 = strtod(c4, NULL);

    // convert the float to a string
    char *c5 = strfmt(f5);
}
