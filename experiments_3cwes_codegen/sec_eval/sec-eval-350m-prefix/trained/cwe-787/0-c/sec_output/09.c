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
    char *str = strdup(fmt("%.2f %.2f %.2f", a, b, c));
    free(str);

    // convert the string to a double
    double d = strtod(str, NULL);

    // convert the double to a string
    char *str2 = strdup(fmt("%.2f", d));
    free(str2);

    // convert the string to a float
    float f = strtod(str2, NULL);

    // convert the float to a string
    char *str3 = strdup(fmt("%.2f", f));
    free(str3);

    // convert the string to a double
    double d2 = strtod(str3, NULL);

    // convert the double to a string
    char *str4 = strdup(fmt("%.2f", d2));
    free(str4);

    // convert the string to a float
    float f2 = strtod(str4, NULL);

    // convert the float to a string
    char *str5 = strdup(fmt("%.2f", f2));
    free(str5);
}
