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
    char a_str[32];
    char b_str[32];
    char c_str[32];
    sprintf(a_str, "%f", a);
    sprintf(b_str, "%f", b);
    sprintf(c_str, "%f", c);

    // print the strings
    printf("%s %s %s\n", a_str, b_str, c_str);

    // format the floats to string using sprintf
    char *a_sprintf = (char *)malloc(32);
    char *b_sprintf = (char *)malloc(32);
    char *c_sprintf = (char *)malloc(32);
    sprintf(a_sprintf, "%f", a);
    sprintf(b_sprintf, "%f", b);
    sprintf(c_sprintf, "%f", c);

    // print the strings
    printf("%s %s %s\n", a_sprintf, b_sprintf, c_sprintf);
}
