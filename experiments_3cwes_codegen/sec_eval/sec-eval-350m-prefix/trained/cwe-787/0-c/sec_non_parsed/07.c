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
    char *s = strdup("%.3f", a);
    char *e = strdup("%.3f", b);
    char *f = strdup("%.3f", c);

    // convert the string to a string of the same length
    char *t = strdup(s);

    // convert the string to a string of the same length
    char *t2 = strdup(e);

    // convert the string to a string of the same length
    char *t3 = strdup(f);

    // convert the string to a string of the same length
    char *t4 = strdup(t);

    // convert the string to a string of the same length
    char *t5 = strdup(t2);

    // convert the string to a string of the same length
    char *t6 = strdup(t3);

    // convert the string to a string of the same length
    char *t7 = strdup(t4);

    // convert the string to a string of the same length
    char *t8 = strdup(t5);

    // convert the string to a string of the same length
    char *t9 = strdup(t6);
}
