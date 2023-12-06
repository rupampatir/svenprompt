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
    char *p = (char *)malloc(sizeof(a) + sizeof(b) + sizeof(c));
    sprintf(p, "%f %f %f", a, b, c);

    // print the string to standard output
    printf("%s\n", p);

    // free the string
    free(p);

    // return 0
    return 0;
}
