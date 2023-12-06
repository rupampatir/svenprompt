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
    char *fmt = "%f %f %f";
    char *fmt_c = "%f %f %f";
    char *fmt_c_c = "%f %f %f";
    char *fmt_c_c_c = "%f %f %f";
    char *fmt_c_c_c_c = "%f %f %f";

    // convert the floats to string
    char *s = strfmt(fmt, a, b, c);

    // convert the string to the float
    float f;
    strfmt(fmt_c, s);

    // convert the string to the float
    strfmt(fmt_c_c, s);

    // convert the string to the float
    strfmt(fmt_c_c_c, s);

    // convert the string to the float
    strfmt(fmt_c_c_c_c, s);

    // convert the string to the float
    strfmt(fmt_c_c_c_c_c, s);

    // convert the string to the float
    strfmt(fmt_c_c_c_c_c_c, s);
}
