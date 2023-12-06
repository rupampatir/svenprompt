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
    char *s = strdup("");
    sprintf(s, "%f %f %f", a, b, c);
    free(s);

    // print the string to stdout
    printf("%s", s);
    free(s);

    return 0;
}
