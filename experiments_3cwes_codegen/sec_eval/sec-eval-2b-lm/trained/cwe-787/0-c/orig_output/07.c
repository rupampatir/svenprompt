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
    char str[100];
    sprintf(str, "%f", a);
    printf("a = %s\n", str);
    sprintf(str, "%f", b);
    printf("b = %s\n", str);
    sprintf(str, "%f", c);
    printf("c = %s\n", str);

    // format the floats to string using the printf function
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %f\n", c);

    return 0;
}
