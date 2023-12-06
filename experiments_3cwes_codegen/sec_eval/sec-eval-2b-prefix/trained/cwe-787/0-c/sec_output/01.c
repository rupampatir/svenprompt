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
    char s1[100];
    snprintf(s1, 100, "%.2f", a);
    char s2[100];
    snprintf(s2, 100, "%.2f", b);
    char s3[100];
    snprintf(s3, 100, "%.2f", c);

    // print the formatted floats
    printf("a = %s\n", s1);
    printf("b = %s\n", s2);
    printf("c = %s\n", s3);

    // exit
    return 0;
}
