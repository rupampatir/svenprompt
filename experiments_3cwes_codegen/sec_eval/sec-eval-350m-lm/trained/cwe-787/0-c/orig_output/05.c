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
    char *str = fformat(a, fmt);
    printf("%s\n", str);
    free(str);

    // format the floats to string using C library functions
    fmt = "%f %f %f";
    str = fformat(b, fmt);
    printf("%s\n", str);
    free(str);

    // format the floats to string using C library functions
    fmt = "%f %f %f";
    str = fformat(c, fmt);
    printf("%s\n", str);
    free(str);

    return 0;
}
