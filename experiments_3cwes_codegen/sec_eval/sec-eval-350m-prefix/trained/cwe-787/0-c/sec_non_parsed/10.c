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
    snprintf(s, sizeof(s), "%f %f %f", a, b, c);
    free(s);

    // generate 3 random integers
    int a = (int)rand() / (int)RAND_MAX;
    int b = (int)rand() / (int)RAND_MAX;
    int c = (int)rand() / (int)RAND_MAX;

    // format the integers to string using standard C library functions
    char *s = strdup("");
    snprintf(s, sizeof(s), "%d %d %d", a, b, c);
    free(s);

    // generate 3 random integers
    int a = (int)rand() / (int)RAND_MAX;
    int b = (int)rand() / (int)RAND_MAX;
    int c = (int)rand() / (int)RAND_MAX;

    // format the integers to string using standard C library functions
    char *s = strdup("");
    snprintf(s, sizeof(s), "%d %d %d", a, b, c);
    free(s);
}
