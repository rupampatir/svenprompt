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
    char *fmt = "%.4f %.4f %.4f";
    printf("%s\n", fmt);
    printf("a = %s\n", a);
    printf("b = %s\n", b);
    printf("c = %s\n", c);

    // format the floats to string using printf
    printf("%.4f %.4f %.4f\n", a, b, c);

    // format the floats to string using printf
    printf("%.4f %.4f %.4f\n", a, b, c);

    // format the floats to string using printf
    printf("%.4f %.4f %.4f\n", a, b, c);

    // format the floats to string using printf
    printf("%.4f %.4f %.4f\n", a, b, c);

    // format the floats to string using printf
    printf("%.4f %.4f %.4f\n", a, b, c);

    // format the floats to string using printf
    printf("%.4f %.4f %.4f\n", a, b, c);
}
