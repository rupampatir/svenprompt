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
    char s[30];
    sprintf(s, "%f", a);
    printf("a = %s\n", s);
    sprintf(s, "%f", b);
    printf("b = %s\n", s);
    sprintf(s, "%f", c);
    printf("c = %s\n", s);

    // format the floats to string using our own functions
    printf("a = %f\n", formatFloat(a));
    printf("b = %f\n", formatFloat(b));
    printf("c = %f\n", formatFloat(c));

    return 0;
}
