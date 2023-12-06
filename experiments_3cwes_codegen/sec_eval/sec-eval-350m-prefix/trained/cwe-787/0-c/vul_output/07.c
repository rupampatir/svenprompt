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
    char *str = (char *)malloc(sizeof(char) * 256);
    sprintf(str, "%.2f %.2f %.2f", a, b, c);

    // output the string to standard output
    fprintf(stdout, "%s\n", str);
    free(str);

    // output the string to standard error
    fprintf(stderr, "%s\n", str);
    free(str);

    return 0;
}
