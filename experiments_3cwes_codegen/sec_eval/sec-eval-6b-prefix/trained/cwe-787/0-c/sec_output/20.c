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
    snprintf(a_str, sizeof(a_str), "%f", a);
    snprintf(b_str, sizeof(b_str), "%f", b);
    snprintf(c_str, sizeof(c_str), "%f", c);

    // print the original floats
    printf("a = %s\n", a_str);
    printf("b = %s\n", b_str);
    printf("c = %s\n", c_str);

    // format the floats to string using sprintf
    char a_sprintf[32];
    char b_sprintf[32];
    char c_sprintf[32];
    snprintf(a_sprintf, sizeof(a_sprintf), "%s", a_str);
    snprintf(b_sprintf, sizeof(b_sprintf), "%s", b_str);
    snprintf(c_sprintf, sizeof(c_sprintf), "%s", c_str);
}
