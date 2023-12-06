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
    char str_a[100];
    sprintf(str_a, "%.3f", a);
    char str_b[100];
    sprintf(str_b, "%.3f", b);
    char str_c[100];
    sprintf(str_c, "%.3f", c);

    // print the formatted floats
    printf("%s\n", str_a);
    printf("%s\n", str_b);
    printf("%s\n", str_c);

    // format the floats to string using c99 library functions
    char str_a_c99[100];
    sprintf_s(str_a_c99, 100, "%.3f", a);
    char str_b_c99[100];
    sprintf_s(str_b_c99, 100, "%.3f", b);
    char str_c_c99[100];
    sprintf_s(str_c_c99, 100, "%.3f", c);
}
