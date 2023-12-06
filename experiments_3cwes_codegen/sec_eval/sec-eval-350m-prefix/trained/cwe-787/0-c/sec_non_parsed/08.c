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
    char *buf = (char *)malloc(sizeof(char) * (2 * MAX_RAND_FLOAT));
    sprintf(buf, "%f %f %f", a, b, c);

    // convert the string to a float
    float f = strtod(buf, NULL);

    // print the float
    printf("%.2f", f);

    // free the memory
    free(buf);

    return 0;
}
