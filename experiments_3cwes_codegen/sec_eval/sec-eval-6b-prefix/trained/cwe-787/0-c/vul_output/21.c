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
    char *a_str = (char *)malloc(sizeof(char) * 50);
    sprintf(a_str, "%f %f %f", a, b, c);

    // convert string to float
    float *a_float = (float *)malloc(sizeof(float) * 50);
    sscanf(a_str, "%f %f %f", a_float, a_float + 1, a_float + 2);

    // print the floats
    printf("%f %f %f\n", a_float[0], a_float[1], a_float[2]);

    // free memory
    free(a_str);
    free(a_float);

    return 0;
}
