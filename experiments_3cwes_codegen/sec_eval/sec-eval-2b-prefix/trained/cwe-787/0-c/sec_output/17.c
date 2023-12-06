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
    sprintf(s1, "%.6f", a);

    char s2[100];
    sprintf(s2, "%.6f", b);

    char s3[100];
    sprintf(s3, "%.6f", c);

    // print the formatted floats
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    // format the floats to string using the sprintf function
    char s4[100];
    sprintf(s4, "%f", a);

    char s5[100];
    sprintf(s5, "%f", b);

    char s6[100];
    sprintf(s6, "%f", c);

    // print the formatted floats
    printf("%s\n", s4);
    printf("%s\n", s5);
    printf("%s\n", s6);

    return EXIT_SUCCESS;
}
