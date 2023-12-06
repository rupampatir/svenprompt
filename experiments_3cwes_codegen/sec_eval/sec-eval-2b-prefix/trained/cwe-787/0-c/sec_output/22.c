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
    snprintf(buf, sizeof(buf), "%.9g", a);
    printf("a = %s\n", buf);

    snprintf(buf, sizeof(buf), "%.9g", b);
    printf("b = %s\n", buf);

    snprintf(buf, sizeof(buf), "%.9g", c);
    printf("c = %s\n", buf);

    // create a string to hold the formatted floats
    char buf2[100];
    snprintf(buf2, sizeof(buf2), "%.9g", a);
    printf("a = %s\n", buf2);

    snprintf(buf2, sizeof(buf2), "%.9g", b);
    printf("b = %s\n", buf2);

    snprintf(buf2, sizeof(buf2), "%.9g", c);
    printf("c = %s\n", buf2);
}
