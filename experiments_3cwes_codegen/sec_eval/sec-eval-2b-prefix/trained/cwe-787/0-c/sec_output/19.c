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
    char buf[100];
    snprintf(buf, sizeof(buf), "%.6f %.6f %.6f", a, b, c);

    // print the formatted string to standard output
    printf("%s\n", buf);

    // free the memory used by the formatted string
    free(buf);

    return 0;
}
