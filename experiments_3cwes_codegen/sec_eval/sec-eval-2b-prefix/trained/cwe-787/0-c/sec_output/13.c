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
    char a_str[100];
    sprintf(a_str, "%f", a);
    char b_str[100];
    sprintf(b_str, "%f", b);
    char c_str[100];
    sprintf(c_str, "%f", c);

    // print the floats
    printf("%s\n", a_str);
    printf("%s\n", b_str);
    printf("%s\n", c_str);

    // return 0
    return 0;
}
